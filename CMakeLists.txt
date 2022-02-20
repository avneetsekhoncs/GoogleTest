cmake_minimum_required(VERSION 3.10)

project(google-test-exercise C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(lib)
add_subdirectory(test)

