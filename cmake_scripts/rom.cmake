include(FetchContent)

set(LUA_CUSTOM_REPO https://github.com/xiaoxiao921/lua-fork.git)

set(LUA_GIT_HASH 1d99acdb3a1bd69aadaa0d8c1b00de80e283dafa)

set(LUA_USE_LUAJIT false)

add_compile_definitions(
    "IMGUI_USER_CONFIG=\"${SRC_DIR}/gui/imgui_config.hpp\""
)

FetchContent_Declare(
	rom
	GIT_REPOSITORY https://github.com/xiaoxiao921/ReturnOfModdingBase.git
	GIT_TAG 77e0b0fed0ef64b29cc144add7cc4670949f8289
)
FetchContent_MakeAvailable(rom)
