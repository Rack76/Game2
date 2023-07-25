#pragma once

class GLFWwindow;

class Renderer
{
public:
	static void init();

private:
	static GLFWwindow* window;
};