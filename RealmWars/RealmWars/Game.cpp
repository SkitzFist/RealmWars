#include "Game.h"

#include "PlaygroundState.h"

//debug
#include <iostream>

Game::Game()
{
	//config
	
	//setup
	window.create(sf::VideoMode(WINDOW_X,WINDOW_Y), "Realm Wars");
	rm = new ResourceManager(window.getSize().x, window.getSize().y);
	currentState = new PlaygroundState(rm);
	
	//debug
}

Game::~Game()
{
	delete currentState;
	delete rm;
}

void Game::run()
{
	time.startClock();
	while (window.isOpen())
	{
		handleInput();
		update();
		render();
	}
}

void Game::handleInput()
{
	sf::Event event;

	while (window.pollEvent(event))
	{
		if (currentState) {
			currentState = currentState->handleInput(event);
		}
		if (event.type == sf::Event::Closed) {
			window.close();
		}
	}
}

void Game::update()
{
	time.restartClock();
	if (currentState) {
		currentState = currentState->update(time.getDeltaTime());
	}
}

void Game::render()
{
	window.clear();
	if (currentState) {
		currentState->render(window);
	}
	window.display();
}
