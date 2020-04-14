#pragma once
#include "Card.h"

class CardPowerPlus : public Card
{
	int power_value;
	CardPowerPlus(string name, int value);
public:
	int get_value() const { return power_value; }
	void play(Game game) const override;
};

