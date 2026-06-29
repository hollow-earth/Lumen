cmake_minimum_required(VERSION 3.25)
project(Lumen_Game_Engine
    VERSION 0.1.0
    LANGUAGES C CXX
)

# Turn GLAD into its own library
add_library(glad external/glad/src/gl.c)
target_include_directories(glad PUBLIC external/glad/include)

# GLFW is already its own library
add_subdirectory(external/glfw)

add_executable(Lumen
    src/main.cpp
)

# Grab the necessary dependencies and link libraries
target_link_libraries(Lumen 
    PRIVATE glad glfw
)

