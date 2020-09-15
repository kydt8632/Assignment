cmake_minimum_required (VERSION 2.8)
project (assignment)

#version number
set (assignment_VERSION_MAJOR 1)
set (assignment_VERSION_MINOR 0)

#include the subdirectory containing our libs
add_subdirectory (lib)
include_directories(lib)
#indicate the entry point for the executable
add_executable (assignment lib main.cpp)

# Indicate which libraries to include during the link process.
target_link_libraries (assignment lib)

install (TARGETS assignment DESTINATION bin)
