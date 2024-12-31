#pragma once

#include "Entity.h"

enum class BrickColour {RED, ORANGE, YELLOW, PURPLE};

//externed sprites
extern Sprite *redBrickSprite;
extern Sprite *yellowBrickSprite;
extern Sprite *orangeBrickSprite;
extern Sprite *purpleBrickSprite;

class BrickEntity : public Entity
{
public:
	BrickColour colour;
	BrickEntity()
	{
		typeID = ENTITYBRICK;
		colour = BrickColour::RED;
	}

	bool HandleCollision();
};

BrickEntity * MakeBrick(BrickColour type, float xpos, float ypos);