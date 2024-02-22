{
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
    files = {
        "hats.c"
    },
    depfiles_gcc = "build/.objs/hats/linux/x86_64/debug/__cpp_hats.c.c: hats.c\
"
}