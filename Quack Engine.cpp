#include "stdafx.h"
#include "glm/glm.hpp"

#include "Window.h"
#include "Time.h"
#include "Game.h"

using namespace Quack;

#define FRAME_CAP 50000;

class QGE
{
private:
	bool isRunning = false;
	Game game;
	Time time;
public:
	QGE()
	{
	}
	void Start()
	{
		if (isRunning)
			return;
		game.Start();
		Update();
	}

	void Stop()
	{
		if (!isRunning)
			return;
		isRunning = false;
	}

	void Update()
	{
		isRunning = true;

		while (isRunning)
		{
			Render();
			game.Input();
			game.Update();
		}
	}

	void Render()
	{
		//init game window
		Window window("test", 800, 600);
		while (!window.Closed())
		{
			game.Render();
			window.Update();
		}
		Stop();
	}

	//getters

	//setters
};

void main()
{
	QGE game;
	game.Start();
}

