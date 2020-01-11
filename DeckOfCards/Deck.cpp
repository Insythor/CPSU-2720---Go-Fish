#include "Deck.h"

Deck::~Deck()
{
}

Deck::Deck()
{
}


void Deck::createDeck()
{
	for (int s = Diamond; s <= Spade; s++)
	{
		for (int r = Ace; r <= King; r++)
		{
			Card c(s, r);

			allCards.push_back(c);
		}
	}
	freshDeck = allCards;
}

void Deck::printDeck()
{
	int width = 15;
	std::cout << std::setfill('.');

	//	To print rank then suit, add 10 rather than subtracting when you switch suit & rank
	for(int i = 0; i < allCards.size(); i ++)
	{
		int tempLength = width - allCards[i].suit.length();

		std::cout << allCards[i].suit << std::setw(tempLength) << allCards[i].rank << std::endl;
	}
	
	std::cout << "\n\n";
}

void Deck::shuffleDeck()
{
	std::random_shuffle(allCards.begin(), allCards.end());
	std::random_shuffle(allCards.begin(), allCards.end());
	std::random_shuffle(allCards.begin(), allCards.end());

	/*for (int f = 0; f < allCards.size(); f++)	//	What I figured out before I knew about shuffle
	{
		int r1 = rand() % allCards.size() - 1;
		std::swap(allCards[r1], allCards[f]);
	}

	for (int f = 0; f < allCards.size(); f++)
	{
		int r1 = rand() % allCards.size() - 1;
		std::swap(allCards[r1], allCards[f]);
	}*/
}

//	Default::Draw a card from the top of the deck
Card Deck::drawCard()
{
	Card drawnCard(allCards[0]);

	allCards.erase(allCards.begin());

	return drawnCard;
}

//	Draw a card from a selected location
Card Deck::drawCard(char drawLocation)
{
	int tIndex;
	Card drawnCard;

	switch (drawLocation)
	{
	case 't':
		drawnCard.init(allCards[0]); 
		allCards.erase(allCards.begin());
		return drawnCard;
		break;

	case 'b':
		drawnCard.init(allCards.back());
		allCards.pop_back();
		return drawnCard;
		break;

	case 'c':
	case 'm':
		tIndex = (allCards.size() - 1) / 2;
		drawnCard.init(allCards[tIndex]);
		allCards.erase(allCards.begin() + tIndex);
		return drawnCard;
		break;

	default:
		drawnCard.init(allCards[0]);
		allCards.erase(allCards.begin());
		return drawnCard;
		break;
	}
}


void Deck::addCard(Card c)
{
	allCards.push_back(c);
}