cmake_minimum_required(VERSION 3.20)

project(Lumen LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 23)

add_executable(Lumen
    src/main.cpp
    external/src/gl.c
)

target_include_directories(Lumen PRIVATE
    external/include
)

add_subdirectory(external/glfw)

target_link_libraries(Lumen PRIVATE glfw)