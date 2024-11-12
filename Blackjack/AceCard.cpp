#include "AceCard.h"
#include <iostream>

int AceCard::setValue()
{
    int aceChoice;
    std::cout << "you drew an ace, press 1 to make it 1, press 2 to make it 11" << std::endl;
    std::cin >> aceChoice;

    if (aceChoice == 1) {
        return aceCardValue[0];
    }
    else {
        return aceCardValue[1];
    }
   
}