cmake_minimum_required(VERSION 4.1.0)
project(sfmltest LANGUAGES CXX)

add_subdirectory(src)
add_subdirectory(dependencies)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
