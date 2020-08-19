#pragma once
#include "GameObject.h"

class Entity :
	public GameObject
{
public:
	Entity(ResourceManager* rm, sf::Texture* texture);
	~Entity();

	// Inherited via GameObject
	virtual void update(double deltaTime) override;

private:

};

/*
	TODO ::
			1. MovementBehaviour(Entity* this)
			2. AttackBehaviour(Entity* this)
			3. Animator
			4. Animations
*/