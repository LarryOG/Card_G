#pragma once
#include <string>

class Game;
using namespace std;

class Card
{
	friend class CardFactory;
		string card_name;

public:
	string  get_name() const { return card_name; }
	virtual ~Card() = default;
	virtual void play(const Game&) = 0;

	
	
};

