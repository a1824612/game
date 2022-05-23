#ifndef DECK_H
#define DECK_H 
#include <string>
#include "casino.h"

using namespace std; 

class Deck: public casino{


        
       


    public: 
        string hand[10][2];
        string cards[13] = {"ace","2","3","4","5","6","7","8","9","10","jack","queen","king"};
        string suit[4] = {"\xE2\x99\xA0","\xE2\x99\xA3","\xE2\x99\xA5","\xE2\x99\xA6"};    //replace with symbols
        Deck();
        int randi(int min, int max);


};













#endif