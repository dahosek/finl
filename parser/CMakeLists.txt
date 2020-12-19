cmake_minimum_required(VERSION 3.17)
project (finl-parser)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory (src)
add_subdirectory (Boost_tests)
enable_testing ()
add_test (NAME MyTest COMMAND Test)