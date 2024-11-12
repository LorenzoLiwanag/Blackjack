#pragma once
#include "Card.h"
class NumberCard : public Card
{
 private:
	 int numberValues[9]{ 2, 3, 4, 5, 6, 7, 8, 9, 10 };
public:
	int setValue() override;


};

