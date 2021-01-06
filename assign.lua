add_rules("mode.debug", "mode.release")



target("assign")
    set_kind("binary")
    add_includedirs("include/greedy/")
    add_files("src/greedy/Assign.cpp")
    add_deps("libassign")
   
-- 此接口相当于gcc的-Lxxx链接选项。


target("libassign")
    set_kind("static")
    add_files("lib/greedy/*.cpp")
    add_includedirs("include/greedy/")