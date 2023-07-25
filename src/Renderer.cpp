#include "Renderer.h"
#include "Input.h"
#include <GLFW/glfw3.h>

void Renderer::init()
{
	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
	glfwMakeContextCurrent(window);
	Input::setWindow(window);
}
