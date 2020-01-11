
#include "Main.h"


bool quite = false;

int main()
{
	
	deck.createDeck();

	deck.shuffleDeck();

	deck.printDeck();

	while (!quite)
	{
		//	Update input for the switch
		input = _getch();


		switch (input)
		{
		case 'd':
			hand.push_back(deck.drawCard('c'));
			std::cout << hand.back().suit<< std::setw(hWidth - hand.back().suit.length()) << hand.back().rank << std::endl;
			break;

		default:
			std::cout << input << std::endl;
			break;

		}
	}
}
