#include "Game.h"

int Game::get_turn() const
{
	return turn;
}

Player* const Game::get_player() const
{
	return player;
}

Player* const Game::get_opponent() const
{
	return opponent;
}

Deck Game::get_deck() const
{
	return deck;
}


