#pragma once
#include <list>
#include <vector>

#include "Card.h"
#include "Observable.h"

class Deck;
using namespace std;
class Player : public Observable<Player>

{
	vector<Card> board;
	list<Card> hand;
	int power;
public:
	int get_power() const;
	list<Card> get_hand() const;
	vector<Card> get_board() const;
	virtual void play_card(Card& c) = 0;
	void pick_card(Deck);
	void return_card(Deck);
	
};

