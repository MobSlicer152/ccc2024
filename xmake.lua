add_rules("mode.debug", "mode.release")

set_project("ccc2024")

set_warnings("everything")

if is_mode("debug") then
    add_defines("DEBUG")
end

target("hats")
    set_kind("binary")
    add_files("hats.c")

target("heavy_light_strings")
    set_kind("binary")
    add_files("heavy_light_strings.c")

target("swipe")
    set_kind("binary")
    add_files("swipe.c")
