#include "TextureManager.h"

TextureManager::TextureManager()
{
	//config

	//setup
	loadPlayGroundTextures();

	//debug
}

TextureManager::~TextureManager()
{
	delete robo;
}

void TextureManager::loadPlayGroundTextures()
{
	robo = new sf::Texture;
	if (!robo->loadFromFile("../Assets/Textures/Robo.png")) {
		cantLoad(L"Can't load Robo.png");
	}
}

sf::Texture* TextureManager::getRobo()
{
	return robo;
}

void TextureManager::cantLoad(LPCWSTR error) const
{
	MessageBox(nullptr, error, L"ERROR", MB_ICONWARNING | MB_OK);
}

