#ifndef CHIP_H
#define CHIP_H 

#include <iostream> 
#include "blackjack.h"
using namespace std; 

class chip: public casino {

//this class will be an abstract class that contains no data members, only pure virtual functions that determine how many chips are won and how many chips are placed in a bet 

public: 
virtual void plus_chips(int bet, int* chip) = 0;    //these functions will have differtent implementations in each game
virtual void minus_chips(int bet, int* chip) = 0;

};


#endif