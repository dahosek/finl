cmake_minimum_required(VERSION 3.17)
project(finl)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(extern)


add_executable(finl main.cpp parser/src/Argument.cpp parser/src/Argument.h)