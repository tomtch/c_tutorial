cmake_minimum_required(VERSION 3.17)
project(c_tutorial)

set(CMAKE_CXX_STANDARD 14)

add_executable(c_tutorial main.c)
include_directories( ./src )

