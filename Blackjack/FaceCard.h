#pragma once
#include "Card.h"
#include <cstdlib>
#include <ctime>
#include <string>
class FaceCard : public Card
{
private:
	int faceCardValue = 10;
public:
	int setValue() override;
};

