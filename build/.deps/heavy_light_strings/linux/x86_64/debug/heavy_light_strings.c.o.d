{
    files = {
        "heavy_light_strings.c"
    },
    values = {
        "/usr/bin/clang",
        {
            "-Qunused-arguments",
            "-m64",
            "-g",
            "-Weverything",
            "-O0",
            "-DDEBUG"
        }
    },
    depfiles_gcc = "build/.objs/heavy_light_strings/linux/x86_64/debug/__cpp_heavy_light_strings.c.c:   heavy_light_strings.c\
"
}