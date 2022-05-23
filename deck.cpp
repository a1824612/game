#include <string>
#include <time.h>
#include <stdlib.h>
#include "deck.h"
using namespace std; 

Deck::Deck(){   //constructor that fills the players hand with empty cards
    for(int i=0;i<10;i++){
        for(int j=0;j<2;j++){
            hand[i][j] = "0";   //fill players hand with "0". doesnt matter what since in implimentation, will only read what it has editted
        }
    }
}

int Deck::randi(int min, int max) { //implementation of the random number function
    int out = rand() % max + min;   //random number between 'min' and "min + max"
    return out; //return this random number
}