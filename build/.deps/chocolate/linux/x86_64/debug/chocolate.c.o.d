{
    depfiles_gcc = "build/.objs/chocolate/linux/x86_64/debug/__cpp_chocolate.c.c: chocolate.c\
",
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
        "chocolate.c"
    }
}