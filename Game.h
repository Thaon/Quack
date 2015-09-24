#pragma once

namespace Quack
{
	class Game
	{
	public:
		Game();
		~Game();

		void Start();
		void Input();
		void Update();
		void Render();
	};
}
