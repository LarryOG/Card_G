#pragma once
#include "Deck.h"
#include "Player.h"

class Game
{
public:
	Game(Deck, Player&, Player&);
	
	int get_turn() const;
	Player* const get_player() const;
	Player* const get_opponent() const;
	Deck get_deck() const;
	
	virtual void start_game() = 0;
	virtual void next_turn() = 0;
	virtual void end_game() = 0;

private:
	Player* player;
	Player* opponent;
	Deck deck;
	int turn = 0;
};

