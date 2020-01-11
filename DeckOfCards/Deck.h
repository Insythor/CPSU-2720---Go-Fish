#pragma once

#include "Card.h"
#include <stdlib.h>
#include <stdio.h>

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>



class Deck
{
private:

//	Unshuffled deck of cards
	std::vector<Card> freshDeck;

public:

	Deck();
	~Deck();

	//	All standard Suits and Ranks declared as enums
	enum allSuits { Diamond, Heart, Club, Spade };
	enum allRanks { Ace = 1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King };

	//	Stores all of the cards currently in the deck
	std::vector<Card> allCards;

	//	Generates a standard 52 card deck
	//	And stores them in vector<Card> allCards
	void createDeck();
	//	Prints out the deck in it's current order to the screen
	void printDeck();
	//	std::shuffle x3 on allCards
	void shuffleDeck();
	//	Draw and remove a card from the 0th index
	Card drawCard();
	//	Draw and Remove a card from the specified index
	Card drawCard(char drawLocation);
	//	Insert a card into the bottom of the deck
	void addCard(Card c);
};

