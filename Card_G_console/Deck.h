#pragma once

#include <queue>

#include "Card.h"

using namespace std;

class Deck
{
	queue<Card> deck;
public:
	Deck(int size);
};

