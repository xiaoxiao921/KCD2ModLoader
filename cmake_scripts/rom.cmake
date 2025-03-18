include(FetchContent)

set(LUA_CUSTOM_REPO https://github.com/xiaoxiao921/lua-fork.git)

# Updating this is annoying, need to navigate to lua-static folder and run
# git fetch --all
# git checkout <the new git hash you are updating to>
set(LUA_GIT_HASH a9c2d8ec4ff7da2ad9b73b60a7233b09656155f1)

set(LUA_USE_LUAJIT false)

add_compile_definitions(
    "IMGUI_USER_CONFIG=\"${SRC_DIR}/gui/imgui_config.hpp\""
)

FetchContent_Declare(
	rom
	GIT_REPOSITORY https://github.com/xiaoxiao921/ReturnOfModdingBase.git
	GIT_TAG dce2a25fd143d23dbf1859dc753f7a2a20a02e0c
)
FetchContent_MakeAvailable(rom)
