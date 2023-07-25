#include "Input.h"
#include <GLFW/glfw3.h>

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    
}

void Input::init()
{
}

void Input::setWindow(GLFWwindow* window)
{
    glfwSetKeyCallback(window, key_callback);
}
