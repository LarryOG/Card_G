#include "CardSteal.h"

CardSteal::CardSteal(string name, bool choose)
{
	set_name(name);
	choose_card = choose;
}


void CardSteal::play(Game game) const
{
	auto player = game.get_active_player();
	if (player == game.get_opponent())
	{
		
	}
}
