#pragma once
#include "Card.h"

using namespace std;

class CardPowerPlus : public Card
{
	int power_value;
	CardPowerPlus(string name, int value);
public:
	int get_value() const { return power_value; }
	void play(const Game& game) override;
};

