#pragma once
#include <SFML/Graphics.hpp>

#include "ResourceManager.h"

class GameObject :
	public sf::Drawable
{
public:
	GameObject(ResourceManager* rm, sf::Texture* texture);
	GameObject();
	~GameObject();

	virtual void update(double deltaTime) = 0;

	sf::Sprite* getSprite();
	void setSpriteTexture(sf::Texture* texture);

	sf::Vector2f getPosition() const;
	void setPosition(sf::Vector2f pos);
	void setPosition(float x, float y);

	float getRotation() const;
	void setRotation(float rotation);
	void addToRotation(float value);

	sf::Vector2f getScale() const;
	void setScale(sf::Vector2f scale);
	void setScale(float x, float y);

	// Inherited via Drawable
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

private:
	sf::Sprite* sprite;

	
	
};

