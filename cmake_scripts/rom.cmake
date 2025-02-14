include(FetchContent)

set(LUA_USE_LUAJIT false)

set(LUA_GIT_HASH 98194db4295726069137d13b8d24fca8cbf892b6)

set(LUA_PATCH_PATH ${CMAKE_CURRENT_SOURCE_DIR}/patches/lua.patch)

add_compile_definitions(
    "IMGUI_USER_CONFIG=\"${SRC_DIR}/gui/imgui_config.hpp\""
)

FetchContent_Declare(
	rom
	GIT_REPOSITORY https://github.com/xiaoxiao921/ReturnOfModdingBase.git
	GIT_TAG c8b792a6a5bee2069b3cbb30db5d06c5176bfcca
)
FetchContent_MakeAvailable(rom)
