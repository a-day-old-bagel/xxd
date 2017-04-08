
cmake_minimum_required( VERSION 3.3 )
set( CMAKE_DISABLE_IN_SOURCE_BUILD ON )
set( CMAKE_DISABLE_SOURCE_CHANGES ON )

project( xxd )

option( XXD_STATIC_LIB "Build a static lib of xxd" OFF )
option( XXD_EXECUTABLE "Build xxd as an executable" ON )

add_library( xxd_static STATIC xxd.c )
target_include_directories( xxd_static PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} )

add_executable( xxd xxd.c main.c )