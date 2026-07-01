#include <glad/gl.h>
#include <GLFW/glfw3.h>
#include <iostream>

int main(){
    // If GLFW can't be initiated, error
    if (!glfwInit()){
        std::cerr << "Unable to initialize GLFW. Exiting." << std::endl;
        return -1;
    }
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_RESIZABLE, false);
    
    GLFWwindow* window = glfwCreateWindow(800, 600, "Lumen", NULL, NULL);

    // If window somehow couldn't be created, error
    if (window == nullptr){
        std::cerr << "Unable to create GLFW window. Exiting." << std::endl;
        return -1;
    }
    
    std::cin.get(); // Wait for user input before destroying window
    glfwDestroyWindow(window);
    return 0;
}