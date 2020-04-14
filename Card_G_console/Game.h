#pragma once
#include "Player.h"
#include "VirtualPlayer.h"

class Game
{
public:
	
	int turn = 0;
	Player player;
	VirtualPlayer opponent;
	Player* active_player;
	std::vector<Card> deck;


	Game(int deck_size);
	int get_turn() const { return turn; }
	Player* get_active_player() const { return active_player; }


	void start_game();
	void next_turn();
	void end_game();
};

