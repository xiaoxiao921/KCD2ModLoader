cmake_minimum_required(VERSION 3.20)

set(CMAKE_POLICY_VERSION_MINIMUM 3.5)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

project(KCD2ModLoader CXX C ASM ASM_MASM)

set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")

# Fetch modules
message("\nFetching modules")
include(cmake_scripts/git.cmake)
include(cmake_scripts/mimalloc.cmake)
include(cmake_scripts/rom.cmake)
include(cmake_scripts/imguizmo.cmake)
include(cmake_scripts/zip.cmake)

message(STATUS "KCD2ModLoader")
file(GLOB_RECURSE SRC_MAIN
    "${SRC_DIR}/**.hpp"
    "${SRC_DIR}/**.h"
    "${SRC_DIR}/**.cpp"
    "${SRC_DIR}/**.cc"
    "${SRC_DIR}/**.cxx"
    "${SRC_DIR}/**.asm"
    "${SRC_DIR}/**.def"
    "${SRC_DIR}/**.rc"
)

add_compile_options(/bigobj)
add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")

if (FINAL)
    add_compile_definitions(FINAL)
endif()

add_library(KCD2ModLoader MODULE "${SRC_MAIN}")

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_property(TARGET KCD2ModLoader PROPERTY CXX_STANDARD 23)

source_group(TREE ${SRC_DIR} PREFIX "src" FILES ${SRC_MAIN})

target_include_directories(KCD2ModLoader PRIVATE
    "${SRC_DIR}"
    "${imguizmo_SOURCE_DIR}"
    "${zip_SOURCE_DIR}"
)

target_precompile_headers(KCD2ModLoader PRIVATE "${SRC_DIR}/common.hpp")

target_link_libraries(KCD2ModLoader PRIVATE ReturnOfModdingBase zip imguizmo mimalloc-static)

# Warnings as errors
set_property(TARGET KCD2ModLoader PROPERTY COMPILE_WARNING_AS_ERROR ON)

add_compile_definitions(KCD2ModLoader
    "_CRT_SECURE_NO_WARNINGS"
    "NOMINMAX"
    "WIN32_LEAN_AND_MEAN"
)

if (MSVC)
    if (FINAL)
        # Aggresive inlining (Release)
        string(REPLACE "Ob2" "Ob3" CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE}")
        # Aggresive inlining (RelWithDebInfo)
        string(REPLACE "Ob1" "Ob3" CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO}")
        # Enable intrinsics
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /Oi")
        # Favor fast code
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /Ot")
        # -ffast-math (fused multiply-add if the arch allows)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /fp:fast")
        # Whole program optimization
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /GL")
        # Function-level linking
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /Gy")
        # Disable Buffer Security Check
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /GS-")
        # Package global data in COMDAT sections for optimization.
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /Gw")

        # For all objects:
        # - strip unused functions
        # - fold identical functions
        # - link-time code generation
        string(REPLACE "INCREMENTAL" "INCREMENTAL:NO" CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO "${CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO}")
        string(REPLACE "INCREMENTAL" "INCREMENTAL:NO" CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO "${CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO}")
        string(REPLACE "INCREMENTAL" "INCREMENTAL:NO" CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO "${CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO}")
        set(CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO "${CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO} /OPT:ICF,REF /LTCG")
        set(CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO "${CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO} /OPT:ICF,REF /LTCG")
        set(CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO "${CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO} /OPT:ICF,REF /LTCG")

        set(CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO "${CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO} /PDBALTPATH:d3d12.pdb")
        set(CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO "${CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO} /PDBALTPATH:d3d12.pdb")
        set(CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO "${CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO} /PDBALTPATH:d3d12.pdb")
    endif()
endif()

set_target_properties(KCD2ModLoader PROPERTIES OUTPUT_NAME "d3d12_")
