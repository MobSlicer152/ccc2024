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
    files = {
        "hats.c"
    },
    depfiles_gcc = "build/.objs/hats/linux/x86_64/release/__cpp_hats.c.c: hats.c\
"
}