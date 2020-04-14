#include "CardPowerPlus.h"

using namespace std;

CardPowerPlus::CardPowerPlus(const string name, const int value)
{
		set_name(name);
		power_value = value;	
}
void CardPowerPlus::play(Game game) const
{ 
	auto player = game.get_active_player();
	player->set_power(player->get_power() + power_value);
}

