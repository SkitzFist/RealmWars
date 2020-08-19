#include "Entity.h"

Entity::Entity(ResourceManager* rm, sf::Texture* texture):
	GameObject(rm, texture)
{
}

Entity::~Entity()
{
}

void Entity::update(double deltaTime)
{
}
