#include "PlaygroundState.h"

#include "Debug.h"


PlaygroundState::PlaygroundState(ResourceManager* rm)
{
	//config

	//setup
	
	//debug
}

PlaygroundState::~PlaygroundState()
{
	
}

GameState* PlaygroundState::handleInput(const sf::Event& event)
{
	GameState* state = this;

	switch (event.type)
	{
	default:
		break;
	}

	return state;
}

GameState* PlaygroundState::update(double time)
{
	GameState* state = this;

	

	return state;
}

void PlaygroundState::render(sf::RenderWindow& window)
{

}
