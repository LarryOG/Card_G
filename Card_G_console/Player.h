#pragma once
#include <vector>

#include "Card.h"

using namespace std;
class Player : public Observable


{
	vector<Card*> board;
	vector<Card*> hand;
	int power = 0;
public:
	int get_power() const;
	void set_power(int new_power);
	
	vector<Card*> get_hand() const;
	void set_hand(vector<Card*> new_hand);
	
	vector<Card*> get_board() const;
	void set_board(vector<Card*> new_board);
	
	void play_card(Card& c, Game game);
	void pick_card(vector<Card> deck);
	void return_card(Card& c, vector<Card> deck);
	
};

