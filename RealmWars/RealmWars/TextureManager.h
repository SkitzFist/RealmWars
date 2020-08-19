#pragma once
#include <SFML/Graphics.hpp>
#include <windows.h>

class TextureManager
{
public:
	TextureManager();
	~TextureManager();

	void loadPlayGroundTextures();

	sf::Texture* getRobo();


private:
	sf::Texture* robo;


	void cantLoad(LPCWSTR error) const;
};

