#pragma once
#include <string>
#include "Game.h"


class Card 
{
	
		
public:
	virtual ~Card() = default;
	virtual void  play(Game game)= 0;
	friend class CardFactory;
	
	
};

