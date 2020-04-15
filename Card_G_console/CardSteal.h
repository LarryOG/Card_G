#pragma once
#include "Card.h"
class CardSteal : public Card
{
	std::string card_name;
	int power_value = 0;
	bool choose_card;
	CardSteal(string name, bool choose);
public:
	
	std::string  get_name() const { return card_name; }
	void set_name(const std::string new_name) { card_name = new_name; }
	int get_value() const { return power_value; }
	bool is_choosing() const { return choose_card; }
	void play(Game game) override;
};

