{
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-fvisibility=hidden",
            "-O3",
            "-DNDEBUG"
        }
    },
    files = {
        "test.c"
    },
    depfiles_gcc = "test.o: test.c\
"
}