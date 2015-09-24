#include "stdafx.h"
#include "Window.h"

namespace Quack
{
	Window::Window(char *title, int width, int height)
	{
		Init(title, width, height);
	}

	Window::~Window()
	{
		glfwDestroyWindow(m_window);
		glfwTerminate();
	}

	void Window::SetTitle(const char *title) const
	{
		glfwSetWindowTitle(m_window, title);
	}

	void Window::Init(char *title, int width, int height)
	{
		if (!glfwInit)
		{
			std::cout << "could not initialize GLFW" << std::endl;
			return;
		}
		else
		{
			m_window = glfwCreateWindow(width, height, title, NULL, NULL);
			if (!m_window)
			{
				std::cout << "could not open GLFW window :(" << std::endl;
				glfwTerminate();
			}
			glfwMakeContextCurrent(m_window);
		}
		if (glewInit() != GLEW_OK)
		{
			std::cout << "could not initialize the GLEWsss" << std::endl;
			return;
		}
	}

	void Window::Update() const
	{
		glfwSwapBuffers(m_window);
		glfwPollEvents();
	}

	bool Window::Closed() const
	{
		return glfwWindowShouldClose(m_window);
	}

	//getters

	//setters
}