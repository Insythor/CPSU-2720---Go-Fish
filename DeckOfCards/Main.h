#pragma once

#include "Deck.h"

#include <iostream>
#include <vector>
#include <string>
#include <conio.h>

Deck deck;
//	Stores a vector of all the cards in the players hand
std::vector<Card> hand;


//	key input called on tick
char input;
//	How far apart the end of the suit name is from the rank name
int hWidth = 15;
