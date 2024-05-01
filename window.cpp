#include "window.h"
#include "json.hpp"
#include <fstream>

using json = nlohmann::json;

GLFWwindow* initializeWindowFromConfig(const std::string& configFile) {
    std::ifstream ifs(configFile);
    if (!ifs.is_open()) {
        // Handle file open failure
    }

    json config;
    ifs >> config;

    int width = config["window"]["width"];
    int height = config["window"]["height"];
    const char* title = config["window"]["title"];

    if (!glfwInit()) {
        // Handle initialization failure
    }

    GLFWwindow* window = glfwCreateWindow(width, height, title, NULL, NULL);
    if (!window) {
        // Handle window creation failure
    }

    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebufferSizeCallback);

    return window;
}

void framebufferSizeCallback(GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}
