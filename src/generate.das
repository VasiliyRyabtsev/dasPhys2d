require cbind/cbind_boost
require daslib/safe_addr
require daslib/strings
require daslib/defer
require daslib/fio


class Phys2dGen : CppGenBind
    override func_to_stdout = false
    def Phys2dGen
        bind_root = "{get_das_root()}/modules/dasPhys2d/src"
        bind_module = "phys2d"
        bind_das_module = "phys2d"
        let pfn = "box2d/box2d.h"
        let pfp = "{get_das_root()}/modules/dasPhys2d/box2d/include/"

        let args <- [{string
            "-xc++-header";
            "-std=c++1z";
            "-I{get_full_file_name(pfp)}"
        }]

        func_per_chunk = 20
        init_args(pfn,pfp,args)
        setDefaultFiles()
        //init_skip_func()
        openAllFiles()



    def override skip_file ( fname:string ) : bool
        if fname |> find("/b2_") >= 0
            return false
        return ! fname |> ends_with(PARSE_FILE_NAME)


    structs_to_skip = [[auto
        "b2TimeStep"; "b2Position"; "b2Velocity"; "b2GrowableStack" //< internal structures
    ]]

    def override skip_struct ( name : string )
        if structs_to_skip |> find_index(name) >= 0
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


    enumRemap <- {{
        "b2ContactFeature::Type"  => "b2ContactFeatureType";
        "b2Manifold::Type"  => "b2ManifoldType";
        "b2Shape::Type" => "b2ShapeType"
    }}

    def override dasEnumName(enum_name,cpp_enum_name:string) : string
        return enumRemap?[cpp_enum_name] ?? CppGenBind`dasEnumName(self,enum_name,cpp_enum_name)


[export]
def main
    var cgb = new Phys2dGen()
    defer <|
        unsafe
            delete cgb
    cgb->generate()
    cgb->genCMakeDecl("DAS_PHYS2D_BIND")
