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
        let pfn = "box2d.h"
        let pfp = "{get_das_root()}/modules/dasBox2d/box2d/include/box2d/"
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

    def override skip_file ( fname:string ) : bool
        //if fname |> find("/b2_") >= 0
        //    return false
        if fname |> ends_with("b2_math.h")
            return false
        return ! fname |> ends_with(PARSE_FILE_NAME)


    def override skip_function ( var c : CXCursor )
        if AnyGenBind`skip_function(self, c)
            return true
        let function_name = string(clang_getCursorSpelling(c))
        if function_name |> starts_with("operator")
            return true
        return false
        

[export]
def main
    var cgb = new Box2dGen()
    defer <|
        unsafe
            delete cgb
    cgb->generate()
    cgb->genCMakeDecl("DAS_BOX2D_BIND")
