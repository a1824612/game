#include <string>
#include <time.h>
#include <stdlib.h>
#include "deck.h"
using namespace std; 

Deck::Deck(){
//constructor that fills the players hand with empty cards
    for(int i=0;i<10;i++){

        for(int j=0;j<2;j++){

            hand[i][j] = "0";
        }


    }

}


int Deck::randi(int min, int max) {
    
    int out = rand() % max + min;
    return out;
}