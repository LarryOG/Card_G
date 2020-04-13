#pragma once
#include "CardPowerPlus.h"

class CardFactory
{
	static CardPowerPlus NewPowerPlus (std::string name, int value)
	{
		return CardPowerPlus(name, value);
	}
};

