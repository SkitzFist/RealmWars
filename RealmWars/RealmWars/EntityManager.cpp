#include "EntityManager.h"

EntityManager::EntityManager()
{
	//config

	//setup
	cap = 40;
	nrOf = 0;
	entities = new Entity*[cap]{ nullptr };
	//debug
	
}

EntityManager::~EntityManager()
{
	for (int i = 0;  i < nrOf; ++i) {
		delete entities[i];
	}
	delete[] entities;
}

void EntityManager::addEntity(Entity* entity)
{
	if (nrOf == cap) {
		expandArr();
	}

	entities[nrOf++] = entity;
}

void EntityManager::expandArr()
{
	cap += 40;
	Entity** tmp = new Entity * [cap] { nullptr };
	for (int i = 0; i < nrOf; ++i) {
		tmp[i] = entities[i];
	}
	delete[] entities;
	entities = tmp;
}
