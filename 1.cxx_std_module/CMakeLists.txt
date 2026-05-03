cmake_minimum_required(VERSION 4.3.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# The UUID depends on the CMake version. Each version has a unique UUID.
#
# To check your current CMake version, run the command `cmake --version`.
#
# To find the UUID, go to the CMake source repository, switch to the tag which is your version,
# open `Help/dev/experimental.rst`, and read the section `C++ import std support`.
#
# For v4.3.0:
# https://github.com/Kitware/CMake/blob/v4.3.0/Help/dev/experimental.rst#c-import-std-support
set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD 451f2fe2-a8a2-47c3-bc32-94786d8fc91b)
set(CMAKE_CXX_MODULE_STD ON)

project(cxx_std_module LANGUAGES CXX)

# Not necessary, just disable the annoying warnings for clang compiler
add_compile_options(
    $<$<CXX_COMPILER_ID:Clang>:-Wno-reserved-module-identifier>
    $<$<CXX_COMPILER_ID:Clang>:-Wno-unused-command-line-argument>
)

add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE
    main.cpp
)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_23)
