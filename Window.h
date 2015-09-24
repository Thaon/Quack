#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <iostream>

namespace Quack{
	
	class Window
	{
	public:
		Window(char *title, int width, int height);
		~Window();

	private:
		GLFWwindow* m_window;

	public:
		void SetTitle(const char *title) const;
		void Init(char *title, int width, int height);
		void Update() const;
		bool Closed() const;
		//getters

		//setters
	};
}