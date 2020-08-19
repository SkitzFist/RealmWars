#include "ResourceManager.h"

ResourceManager::ResourceManager(unsigned int windowX, unsigned int windowY)
{
	//cofig

	//setup
	windowSize.x = windowX;
	windowSize.y = windowY;
	tm = new TextureManager();
	//debug
}

ResourceManager::~ResourceManager()
{
	delete tm;
}

TextureManager* ResourceManager::getTm() const
{
	return tm;
}