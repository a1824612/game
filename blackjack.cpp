#include "blackjack.h"
#include "chip.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h> 




blackjack::blackjack() {
    cout << endl << "Here are the rules:" << endl << "-The goal of blackjack is to beat the house's hand without going over 21.\n-Face cards are worth 10. Aces worth 1.\n-The player starts with 1 cards and the house has 2 cards hidden from the player.\n-You must enter the number of chips you wish to bet before recieving your cards. The higher the bet the higher the reward.\n-You can 'hit' to recieve another card or 'sit' to face the dealer.\n\n" << endl;                    // insert game rules
    cout<< "Enter the '?' key when asked to sit or hit to view your hand"<<endl;    //Print rules of the game
    cout<<endl;
   
    int cardIndex = deck.randi(0,10);   //Random number corresponding to the index of the card array (if this is 9 then we move on to random face)
    int aboveNumberIndex = 0;           //Set to 0 so if n!=9 we dont incorrectly display the value of the card given
    if (cardIndex==9) { //If statement to choose face
        aboveNumberIndex = deck.randi(0,3); //Random number corresponding the the index of card array when cardIndex==9 for Face and no face
    }
    int suitIndex = deck.randi(0,4);    //Random sumber corresponding to the suit of the card given
    house = 10+deck.randi(1,10);    //Give the house a random number between 11 and 20(changed from between 2 and 20 since house was too easy)
    player = cardIndex+1;           //increase players score. cardIndex+1 since cardIndex is used in the cards array
    round = 1;  //set round index to 1 since above code plays out first round.
    deck.hand[0][0] = deck.cards[cardIndex + aboveNumberIndex]; //set first card in your hand to that which you drew
    deck.hand[0][1] = deck.suit[suitIndex];                     //^
    
    cout << "You have: " << deck.cards[cardIndex + aboveNumberIndex] << deck.suit[suitIndex] << endl; //display card drawn
 
}

blackjack::~blackjack() {
    
}

bool blackjack::went_bust() {
    if (player>21) {
        return 1;
    }
    return 0;
} 

void blackjack::recieve_card() {    //function to revieve a card from the house
    
    int cardIndex = deck.randi(0,10);   //Random number corresponding to the index of the card array (if this is 9 then we move on to random face)
    int aboveNumberIndex = 0;           //Set to 0 so if n!=9 we dont incorrectly display the value of the card given
    if (cardIndex==9) {                 //If statement to choose face
        aboveNumberIndex = deck.randi(0,3); //Random number corresponding the the index of card array when cardIndex==9 for Face and no face
    }
    int suitIndex = deck.randi(0,4);    //Random sumber corresponding to the suit of the card given
    cout << "Recieved: " << deck.cards[cardIndex + aboveNumberIndex] << deck.suit[suitIndex]<<endl; //display card drawn
    deck.hand[round][0] = deck.cards[cardIndex + aboveNumberIndex];     //set first card in your hand to that which you drew
    deck.hand[round][1] = deck.suit[suitIndex];                         //^
    player = player + cardIndex + 1;    //increase players score. cardIndex+1 since cardIndex is used in the cards array

    round++;    //increment rounds index.
}

void blackjack::print_hand() {  //funcion to print platers hand
    for (int i = 0; i < round; i++) {
        cout << deck.hand[i][0] << deck.hand[i][1] << endl;
    }
    cout<<"Current total score: "<<player<<endl;    //Final addition that is to make it more clear to the player what their current score is
}

bool blackjack::compare() {
    
    if (house>=player) {
        return 1;   //True
    } else {return 0/*false*/;}
}