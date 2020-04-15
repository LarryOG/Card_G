#pragma once
#include "Card.h"
class CardPowerMinus : public Card
{
	std::string card_name;
	int power_value;
	CardPowerMinus(string name, int value);
public:
	
	std::string  get_name() const { return card_name; }
	void set_name(const std::string new_name) { card_name = new_name; }
	int get_value() const { return power_value; }
	void play(Game game) override;
};

