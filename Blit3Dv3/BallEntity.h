#pragma once

#include "Entity.h"

class BallEntity : public Entity
{
public:
	BallEntity() 
	{
		typeID = ENTITYBALL;
	}
};

BallEntity * MakeBall(Sprite *sprite);