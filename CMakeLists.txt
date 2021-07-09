cmake_minimum_required(VERSION 3.10)

set(CMAKE_C_STANDARD 17)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${SOURCE_DIR})

set(PROJECT_NAME TeeLib)
set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)

project(${PROJECT_NAME})

include(src/CMakeLists.txt)
