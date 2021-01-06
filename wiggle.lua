add_rules("mode.debug", "mode.release")

target("wiggle")
    set_kind("binary")
    add_includedirs("include/greedy/")
    add_files("src/greedy/wiggle.cpp")
    add_deps("libwiggle")
target("libwiggle")
    set_kind("static")
    add_files("lib/greedy/WiggleSubsequence.cpp")
    add_includedirs("include/greedy/")