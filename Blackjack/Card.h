#pragma once
#include <string>

class Card {
protected:
	int value;
public:
	Card (int cardValue) :value (cardValue) {}
	int getCardValue() const;
	virtual int setValue() = 0;
};


