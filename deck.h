#ifndef DECK_H
#define DECK_H 
#include <string>
using namespace std; 

class Deck{


        
       


    public: 
        string hand[10][2];
        string cards[13] = {"ace","2","3","4","5","6","7","8","9","10","jack","queen","king"};
        string suit[4] = {"diamonds","clubs","spaids","hearts"};    //replace with symbols
        Deck();


};













#endif