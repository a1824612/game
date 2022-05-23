#ifndef DECK_H
#define DECK_H 
#include <string>
#include "casino.h"

using namespace std; 

class Deck{
    public: 
        string hand[10][2]; //array storing the cards the player has
        string cards[13] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};      //the possible cards the player can have
        string suit[4] = {"\xE2\x99\xA0","\xE2\x99\xA3","\xE2\x99\xA5","\xE2\x99\xA6"}; //the possible suits for the player
        Deck(); //default constructor for deck: fills hand with 0's
        int randi(int min, int max);    //function to return a random number between 'min' and 'min+max'
};

#endif