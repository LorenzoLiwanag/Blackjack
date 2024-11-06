#include "Card.h"
#include <iostream>
#include <ctime>


int FaceCard::setValue()
{
	int faceCardValue = 10;
	return faceCardValue;
}
//generate a random number. that random number will determine which element in the numbered cards array will be used. that is what will also be returned.
int NumberedCard::setValue()
{
	int numberedCards[9] { 2,3,4,5,6,7,8,9,10 };
	srand(time(0));
	int selectedNumberedCard = rand() % 9 + 2;

}

int AceCard::setValue()
{
	int playerChooses1Or11;
	std::cin >> playerChooses1Or11;
	int aceValue;
	playerChooses1Or11 == 1 ? aceValue = 1 : aceValue = 11;
	return aceValue;
}
