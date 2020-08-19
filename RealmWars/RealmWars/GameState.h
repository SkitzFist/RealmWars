#pragma once
#include "ResourceManager.h"
#include "SFML/Graphics.hpp"

class GameState
{
public:

	GameState();
	~GameState();

	virtual GameState* handleInput(const sf::Event& event) = 0;
	virtual GameState* update(double time = 0.0) = 0;
	virtual void render(sf::RenderWindow &window) = 0;

};