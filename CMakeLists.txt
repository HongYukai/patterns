cmake_minimum_required(VERSION 3.0)
project(patterns)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(${PROJECT_SOURCE_DIR}/lib)

add_executable(test main.cpp)

target_link_libraries(test PUBLIC patterns)