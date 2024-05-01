#include "window.h"
#include "input.h"
#include "renderer.h"

int main() {
    GLFWwindow* window = initializeWindowFromConfig("config.json");

    while (!glfwWindowShouldClose(window)) {
        processInput(window);
        render();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
