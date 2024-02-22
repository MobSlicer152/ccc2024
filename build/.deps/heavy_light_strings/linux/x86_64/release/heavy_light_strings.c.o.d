{
    values = {
        "/usr/bin/clang",
        {
            "-Qunused-arguments",
            "-m64",
            "-fvisibility=hidden",
            "-Weverything",
            "-O3",
            "-DNDEBUG"
        }
    },
    depfiles_gcc = "build/.objs/heavy_light_strings/linux/x86_64/release/__cpp_heavy_light_strings.c.c:   heavy_light_strings.c\
",
    files = {
        "heavy_light_strings.c"
    }
}