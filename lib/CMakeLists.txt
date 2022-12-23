cmake_minimum_required(VERSION 3.0)
project(patterns)

set(CMAKE_CXX_STANDARD 14)

FILE(GLOB src *.cpp)

add_library(patterns STATIC ${src})

target_include_directories(patterns PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})