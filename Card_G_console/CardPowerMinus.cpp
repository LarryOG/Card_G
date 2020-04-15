#include "CardPowerMinus.h"

CardPowerMinus::CardPowerMinus(string name, int value)
{
	set_name(name);
	if (value > 0)
	{
		power_value = 0 - value;
	}
	else { power_value = value; }
}

void CardPowerMinus::play(Game game) const
{
	auto player = game.get_active_player();
	player->set_power(player->get_power() + power_value);
}

