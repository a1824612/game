#include "blackjack.h"
#include "chip.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h> 




blackjack::blackjack() {
    cout << "Here are the rules:" << endl << "-The goal of blackjack is to beat the house's hand without going over 21.\n-Face cards are worth 10. Aces worth 1.\n-The player starts with 1 cards and the house has 2 cards hidden from the player.\n-You must enter the number of chips you wish to bet before recieving your cards. The higher the bet the higher the reward.\n-You can 'hit' to recieve another card or 'sit' to face the dealer.\n\n" << endl;                    // insert game rules
    cout<< "Enter the '?' key when asked to sit or hit to view your hand"<<endl;
    cout<<endl;
   
    int cardIndex = deck.randi(0,10);    //make rand -> function to return random number between x and y
    int aboveNumberIndex = 0;
    if (cardIndex==9) {
        aboveNumberIndex = deck.randi(0,3);
    }
    int suitIndex = deck.randi(0,4);
    house = 10+deck.randi(1,10);
    player = cardIndex+1;           //cardIndex+1 since cardIndex is used in the cards array
    round = 1;
    deck.hand[0][0] = deck.cards[cardIndex + aboveNumberIndex]; 
    deck.hand[0][1] = deck.suit[suitIndex];
    
    cout << "You have: " << deck.cards[cardIndex + aboveNumberIndex] << deck.suit[suitIndex] << endl; //removed " of " since we will add symbolic expression
 
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
    
    int cardIndex = deck.randi(0,10);
    int aboveNumberIndex = 0;
    if (cardIndex==9) {
        aboveNumberIndex = deck.randi(0,3);
    }
    int suitIndex = deck.randi(0,4);
    cout << "Recieved: " << deck.cards[cardIndex + aboveNumberIndex] << deck.suit[suitIndex]<<endl;
    deck.hand[round][0] = deck.cards[cardIndex + aboveNumberIndex];
    deck.hand[round][1] = deck.suit[suitIndex];
    player = player + cardIndex + 1;

    round++;       
}

void blackjack::print_hand() {
    
    for (int i = 0; i < round; i++) {
        cout << deck.hand[i][0] << deck.hand[i][1] << endl;
    }
    cout<<"Current total score: "<<player<<endl;
}

bool blackjack::compare() {
    
    if (house>=player) {
        return 1;
    } else {return 0;}
}