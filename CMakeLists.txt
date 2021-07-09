cmake_minimum_required(VERSION 3.10)

set(CMAKE_C_STANDARD 17)

set(PROJECT_NAME TeeLib)
set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

project(${PROJECT_NAME})

include(src/CMakeLists.txt)
include(include/CMakeLists.txt)