#ifndef BLACKJACK_H
#define BLACKJACK_H

#include<string>
#include<iostream> 
#include"deck.h"

using namespace std;

class blackjack: public Deck {
    protected:
        int house;  //integer storing houses currect score
        int player; //integer storing palyers currect score
        int round;  //integer sotring the number of rounds that have passed

       
    public:
        Deck deck;              //public declaration of a deck object to be used in blackjack
        blackjack();            //Default constructor sets player=0, house=rnd(1-12)+rnd(1-12), hand[] = 0
        ~blackjack();           //Default destructor
        void recieve_card();    //Gives player their next card
        void print_hand();      //Prints players current hand
        bool went_bust();       //If player>21, return 1 (lost)
        bool compare();         //Check if house>player
};


#endif