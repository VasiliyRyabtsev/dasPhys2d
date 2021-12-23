require cbind/cbind_boost
require daslib/safe_addr
require daslib/strings
require daslib/defer
require daslib/fio


class Box2dGen : CppGenBind
    override func_to_stdout = false
    def Box2dGen
        bind_root = "{get_das_root()}/modules/dasBox2d/src"
        bind_module = "box2d"
        bind_das_module = "box2d"
        let pfn = "box2d/box2d.h"
        let pfp = "{get_das_root()}/modules/dasBox2d/box2d/include/"
/*
        let args <- [{string
            "-xc++-header";
            "-std=c++1z";
            "-I{get_full_file_name(pfp)}"
        }]
*/
        let args <- [{string
            "-xc++-header";
            "-I{get_full_file_name(pfp)}"
        }]

        func_per_chunk = 20
        init_args(pfn,pfp,args)
        setDefaultFiles()
        //init_skip_func()
        openAllFiles()

    used_box2d_headers = [[auto
      "b2_math.h"; "b2_world.h";
      //"b2_body.h";  // Uses unbindable userdata
      //"b2_collision.h";  // generator fails
      //"b2_fixture.h"; // Uses unbindable userdata
      "b2_shape.h"; "b2_chain_shape.h"; "b2_circle_shape.h"; "b2_edge_shape.h"; "b2_polygon_shape.h"
      //"b2_joint.h"; "b2_distance_joint.h"; "b2_friction_joint.h"; "b2_gear_joint.h"; "b2_motor_joint.h";
      //"b2_mouse_joint.h"; "b2_prismatic_joint.h"; "b2_pulley_joint.h"; "b2_revolute_joint.h"; "b2_weld_joint.h"; "b2_wheel_joint.h"
    ]]


    def override skip_file ( fname:string ) : bool
        //if fname |> find("/b2_") >= 0
        //    return false
        for fn in used_box2d_headers
            if fname |> ends_with(fn)
                return false
        return ! fname |> ends_with(PARSE_FILE_NAME)


    def override skip_struct ( name : string )
        //if (name=="b2Vec2" || name=="b2Vec3" || name=="b2Mat22" || name=="b2Mat33")
        //    return true
        if (name=="b2DestructionListener" || name=="b2ContactFilter" || name=="b2ContactListener" 
          || name=="b2QueryCallback" || name=="b2RayCastCallback " || name=="b2Contact"
          || name=="b2ContactManager" || name=="b2Profile")
            return true

        return false

    def override skip_function ( var c : CXCursor )
        if AnyGenBind`skip_function(self, c)
            return true
        let function_name = string(clang_getCursorSpelling(c))
        if function_name |> starts_with("operator")
            return true
        return false


    b2_local_types = [[auto
        "b2Vec2"; "b2Vec3"; "b2Mat22"; "b2Mat33";
        "b2Transform"; "b2Sweep"
    ]]


    def override isLocalType ( name,cppname:string )
        if b2_local_types |> find_index(name)>=0
            return true
        return false

    def override generateModuleHPrefix    
        module_h_file |> fwrite("#include \"b2TypesSetup.h\"\n")
        CppGenBind`generateModuleHPrefix(self)


[export]
def main
    var cgb = new Box2dGen()
    defer <|
        unsafe
            delete cgb
    cgb->generate()
    cgb->genCMakeDecl("DAS_BOX2D_BIND")
