#pragma once

#include <string>
#include <iostream>

class Card
{
private:
	
	std::string formatRank(int r);

	//	Returns "Joker" if any suit or rank is invalid
	void formatCard();

public:
	//	Default constructor
	Card(int s, int r);
	// Overloaded constructor
	Card();

	~Card();
	//	All standard Suits and Ranks declared as enums
	enum allSuits { Diamond, Heart, Club, Spade };
	enum allRanks { Ace = 1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King };
	//	Stores integer of the Suit and Rank
	int suitNum;
	int rankNum;
	//	Stores the name of the Suit and Rank
	std::string suit;
	std::string rank;
	
	//	Duplicate of the constructor (temp)
	void init(Card c);
};

