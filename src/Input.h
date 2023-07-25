#pragma once

class GLFWwindow;

class Input
{
public:
	static void init(); //use after Renderer::init()
	static void setWindow(GLFWwindow* window);

private:
	static GLFWwindow* window;
};