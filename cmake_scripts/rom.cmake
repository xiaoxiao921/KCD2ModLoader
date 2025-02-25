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
	GIT_TAG d03b8b43688f09e1fbdc9d1d3aa55c768764c395
)
FetchContent_MakeAvailable(rom)
