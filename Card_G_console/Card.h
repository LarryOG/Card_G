#pragma once
#include <string>
#include "Game.h"


class Card
{
	friend class CardFactory;
		std::string card_name;

public:
	std::string  get_name() const { return card_name; }
	void set_name(const std::string new_name) { card_name = new_name; }
	virtual ~Card() = default;
	virtual void play(Game game) const = 0;

	
	
};

