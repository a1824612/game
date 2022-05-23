#include "casino.h"
#include "blackjack.h"
#include "chip.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h> 



blackjack::blackjack() {
    cout << "You have chosen to play blackjack. Here are the rules:" << endl << "*rules*" << endl;                    // insert game rules
    cout<< "Enter the '?' key when asked to sit or hit to view your hand"<<endl;
    int cardIndex = rand() % 10;    //make rand -> function to return random number between x and y
    int aboveNumberIndex = 0;
    if (cardIndex==9) {
        aboveNumberIndex = rand() % 3;
    }
    int suitIndex = rand() % 4;
    house = (rand() % 10 + 1)+(rand() % 10 + 1);
    player = cardIndex+1;           //cardIndex+1 since cardIndex is used in the cards array
    round = 1;
    hand[0][0] = cards[cardIndex + aboveNumberIndex]; 
    hand[0][1] = suit[suitIndex];
    
    cout << "You have: " << cards[cardIndex + aboveNumberIndex] << suit[suitIndex] << endl; //removed " of " since we will add symbolic expression
 
}

blackjack::~blackjack() {
   
}

bool blackjack::went_bust() {
    if (player>21) {
        return 1;
    }
    return 0;
} 

void blackjack::recieve_card() {    //would be good if this is a function to be used in constructor
    int cardIndex = rand() % 10;
    int aboveNumberIndex = 0;
    if (cardIndex==9) {
        aboveNumberIndex = rand() % 3;
    }
    int suitIndex = rand() % 4;
    cout << "Recieved: " << cards[cardIndex + aboveNumberIndex] << suit[suitIndex]<<endl;
    hand[round][0] = cards[cardIndex + aboveNumberIndex];
    hand[round][1] = suit[suitIndex];
    player = player + cardIndex + 1;

    round++;       
}

void blackjack::print_hand() {
    for (int i = 0; i < round; i++) {
        cout << hand[i][0] << " of " << hand[i][1] << endl;
    }
}

bool blackjack::compare() {
    if (house>=player) {
        return 1;
    } else {return 0;}
}