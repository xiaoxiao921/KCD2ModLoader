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
	GIT_TAG 375f2bdfb0a06f29fa80295469ee0177e68d9d11
)
FetchContent_MakeAvailable(rom)
