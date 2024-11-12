#pragma once
#include "Card.h"
class AceCard : public Card
{
private:
	int aceCardValue[2]{ 1,11 };
public:
	int setValue() override;

};

