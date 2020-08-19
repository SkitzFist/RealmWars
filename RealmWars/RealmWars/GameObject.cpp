#include "GameObject.h"

GameObject::GameObject(ResourceManager* rm, sf::Texture* texture)
{
	//config

	//setup
	sprite = new sf::Sprite();
	setSpriteTexture(texture);
	//debug
}

GameObject::GameObject()
{
	sprite = nullptr;
}

GameObject::~GameObject()
{
}



sf::Sprite* GameObject::getSprite()
{
	return sprite;
}

void GameObject::setSpriteTexture(sf::Texture* texture)
{
	sprite->setTexture(*texture);
}

sf::Vector2f GameObject::getPosition() const
{
	return sprite->getPosition();
}

void GameObject::setPosition(sf::Vector2f pos)
{
	sprite->setPosition(pos);
}

void GameObject::setPosition(float x, float y)
{
	sprite->setPosition(x, y);
}

float GameObject::getRotation() const
{
	return sprite->getRotation();
}

void GameObject::setRotation(float rotation)
{
	sprite->setRotation(rotation);
}

void GameObject::addToRotation(float value)
{
	sprite->rotate(value);
}

sf::Vector2f GameObject::getScale() const
{
	return sprite->getScale();
}

void GameObject::setScale(sf::Vector2f scale)
{
	sprite->setScale(scale);
}

void GameObject::setScale(float x, float y)
{
	sprite->setScale(x, y);
}

void GameObject::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(*sprite, states);
}
