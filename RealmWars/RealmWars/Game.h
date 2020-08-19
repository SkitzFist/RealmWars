#pragma once
#include <SFML/Graphics.hpp>

#include "GameState.h"
#include "Time.h"
#include "ResourceManager.h"

class Game
{
public:
	Game();
	~Game();
	void run();

private:
	sf::RenderWindow window;
	GameState* currentState;
	Time time;
	ResourceManager* rm;

	void handleInput();
	void update();
	void render();

	//Temp
	const int WINDOW_X = 800;
	const int WINDOW_Y = 600;
};

