#pragma once
#include "Card.h"

class CardPowerPlus : public Card
{
	std::string card_name;
	int power_value;
	
public:
	CardPowerPlus(string name, int value);
	std::string  get_name() const { return card_name; }
	void set_name(const std::string new_name) { card_name = new_name; }
	int get_value() const { return power_value; }
	void play(Game game) override {
		auto player = game.get_active_player();
		player->set_power(player->get_power() + power_value);
	}
};

