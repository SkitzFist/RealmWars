#pragma once
#include <SFML/Graphics.hpp>

#include "TextureManager.h"

class ResourceManager
{
public:
	ResourceManager(unsigned int windowX, unsigned int windowY);
	~ResourceManager();

	TextureManager* getTm() const;

private:
	TextureManager* tm;
	sf::Vector2u windowSize;
};

