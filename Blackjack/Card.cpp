#include "Card.h"


int FaceCard::setValue()
{
	int faceCardValue = 10;
	return faceCardValue;
}

int NumberedCard::setValue()
{
	int numberedCards[9] { 2,3,4,5,6,7,8,9,10 };

}

int AceCard::setValue()
{
	int playerChooses1Or11;
	int aceValue;
	playerChooses1Or11 == 1 ? aceValue = 1 : aceValue = 11;
	return aceValue;
}
