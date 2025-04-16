include(FetchContent)

FetchContent_Declare(
	imguizmo
	GIT_REPOSITORY https://github.com/CedricGuillemet/ImGuizmo.git
	GIT_TAG 5963494a945f0e67a2bdace9cdb7f7d39c87bd9d
)

FetchContent_GetProperties(imguizmo)
if(NOT imguizmo_POPULATED)
    message("Fetching imguizmo")
    FetchContent_GetProperties(imgui)
    message(STATUS "ImGui source dir: ${imgui_SOURCE_DIR}")
    FetchContent_MakeAvailable(imguizmo)

    add_library(imguizmo STATIC ${imguizmo_SOURCE_DIR}/ImGuizmo.cpp)

    target_include_directories(imguizmo PUBLIC
            ${imguizmo_SOURCE_DIR}
            ${imgui_SOURCE_DIR}/
    )

    target_link_libraries(imguizmo PRIVATE imgui)
endif()