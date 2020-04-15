#include "Game.h"


#include "CardPowerMinus.h"
#include "CardPowerPlus.h"
#include "CardSteal.h"

Game::Game(int deck_size)
{
	//number of power+ cards in the deck
	auto a = deck_size / 2;
	//number of power- cards in the deck
	auto b = deck_size / 4;
	//number of steal cards in the deck
	auto c = deck_size / 4;

	//populate the deck with "a" number of cards power+
	for (int i = 0; i < a; i++)
	{
		std::string name = "plus" + i;
		deck.push_back(unique_ptr<CardPowerPlus>(new CardPowerPlus(name,i)));
	}
	//populate the deck with "b" number of cards power-
	for (int i = 0; i < b; i++)
	{
		std::string name = "minus" + i;
		deck.push_back(unique_ptr<CardPowerPlus>(new CardPowerMinus(name, i)));
	}
	//populate the deck with "c" number of cards steal
	for (int i = 0; i < c; i++)
	{
		std::string name = "steal" + i;
		deck.push_back(unique_ptr<CardPowerPlus>(new CardSteal(name, i)));
	}
}

void Game::start_game()
{
	++turn;
	active_player = &opponent;
}
