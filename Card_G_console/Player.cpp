#include "Player.h"

int Player::get_power() const
{
	return power;
}

list<Card> Player::get_hand() const
{
	return hand;
}

vector<Card> Player::get_board() const
{
	return board;
}

void Player::play_card(Card card)
{
	card.play();
}

void Player::pick_card(Deck)
{
	
}


