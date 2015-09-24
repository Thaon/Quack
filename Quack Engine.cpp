// Quack Engine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Window.h"

void main()
{
	using namespace Quack;

	Window window("test", 800, 600);
	while (!window.Closed())
	{
		window.Update();
	}
}

