#include "Card.h"


Card::~Card()
{
}


Card::Card(int s, int r)
{

	suitNum = static_cast<allSuits>(s);
	rankNum = static_cast<allRanks>(r);

	formatCard();
}

Card::Card()
{

}


void Card::init(Card c)
{

	suitNum = c.suitNum;
	rankNum = c.rankNum;

	formatCard();
}



void Card::formatCard()
{
	rank = formatRank(rankNum);

	switch (suitNum)
	{
		case 0:
			suit = "Diamonds";
			break;
		
		case 1:
			suit = "Hearts";
			break;

		case 2:
			suit = "Clubs";
			break;

		case 3:
			suit = "Spades";
			break;

		default:
			suit = "Joker";
			break;
	}
}

std::string Card::formatRank(int r)
{
	std::string temp;

	if (r == 1 || r >= 11)
	{
		switch (r)
		{
		case 1:
			temp = "Ace";
			break;

		case 11:
			temp = "Jack";
			break;

		case 12:
			temp = "Queen";
			break;

		case 13:
			temp = "King";
			break;

		default:
			temp = "Joker";
			break;
		}
	}
	else 
	{
		temp = std::to_string(r);
	}

	return temp;
}
