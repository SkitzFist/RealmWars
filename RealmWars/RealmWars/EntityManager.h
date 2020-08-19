#pragma once

#include "Entity.h"

class EntityManager
{
public:
	EntityManager();
	~EntityManager();

	void addEntity(Entity* entity);
	void expandArr();

private:
	int nrOf;
	int cap;
	Entity** entities;
};