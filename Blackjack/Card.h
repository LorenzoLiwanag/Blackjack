#pragma once
#include <string>

class Card {
public:
	virtual int setValue() = 0;

protected:
	int value;
	std::string type;
};


class FaceCard : public Card {
public:
	int setValue() override;
};

class NumberedCard : public Card {
public:
	int setValue() override;
};

class AceCard : public Card {
public:
	int setValue() override;
};
