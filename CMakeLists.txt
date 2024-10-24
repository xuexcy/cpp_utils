cmake_minimum_required(VERSION 3.18)
project(cpp_utils)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(cpp_utils INTERFACE)
target_include_directories(cpp_utils INTERFACE util.h)
set_target_properties(cpp_utils PROPERTIES LINKER_LANGUAGE CXX)
