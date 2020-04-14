#include "Player.h"

int Player::get_power() const
{
	return power;
}

void Player::set_power(int new_power) 
{
	power = new_power;
}


vector<Card*> Player::get_hand() const
{
	return hand;
}

void Player::set_hand(vector<Card*> new_hand)
{
	hand = new_hand;
}
 
vector<Card*> Player::get_board() const
{
	return board;
}

void Player::set_board(vector<Card*> new_board)
{
	board = new_board;
}

void Player::play_card(Card& c, Game game)
{
	hand.erase(remove(hand.begin(), hand.end(), c), hand.end());

	board.push_back(c);

	c.play(game);
}




