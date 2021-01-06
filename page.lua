add_rules("mode.debug", "mode.release")

target("main")
    set_kind("binary")
    add_includedirs("include/content/")
    add_files("src/fifo/*.cpp")
    add_deps("libcontent")
   
-- 此接口相当于gcc的-Lxxx链接选项。

target("libcontent")
    set_kind("static")
    add_files("lib/content/*.cpp")
    add_includedirs("include/page/")
    add_includedirs("include/content/")
    add_deps("libpage")
target("libpage")
    set_kind("static")
    add_files("lib/page/*.cpp")
    add_includedirs("include/page/")