target("testBank")
        set_kind("binary")
        add_includedirs("include/banker/")
        add_files("src/TestBack.cpp")
        add_deps("libbank")
target("libbank")
    set_kind("static")
    add_files("lib/banker/Banker.cpp")
    add_includedirs("include/banker/")
