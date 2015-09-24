#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

namespace Quack
{
	class Time
	{
	public:
		Time();
		~Time();

	public:
		double GetTime();
		double DeltaTime();
	};
}