#pragma once
#include "GameState.h"

#include "Entities.h"

class PlaygroundState : public GameState
{
public:
	PlaygroundState(ResourceManager* rm);
	~PlaygroundState();



	// Inherited via GameState
	virtual GameState* handleInput(const sf::Event& event) override;
	virtual GameState* update(double time = 0.000) override;
	virtual void render(sf::RenderWindow& window) override;

private:
	ResourceManager* rm;
};