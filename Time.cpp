#include "stdafx.h"
#include"Time.h"

namespace Quack
{
	Time::Time() {};
	Time::~Time() {};

	double Time::GetTime()
	{
		return glfwGetTime();
	}

	double Time::DeltaTime()
	{
		//useless at the moment
		return glfwGetTime();
	}
}