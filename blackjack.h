#ifndef BLACKJACK_H
#define BLACKJACK_H

#include<string>
#include<iostream>

using namespace std;

class blackjack {
    protected:
        int house;  //integer storing houses currect score
        int player; //integer storing palyers currect score
        int round;  //integer sotring the number of rounds that have passed

        //move into a cards class
        string hand[10][2];
        string cards[13] = {"ace","2","3","4","5","6","7","8","9","10","jack","queen","king"};
        string suit[4] = {"diamonds","clubs","spaids","hearts"};    //replace with symbols

    public:
        blackjack();            //Default constructor sets player=0, house=rnd(1-12)+rnd(1-12), hand[] = 0
        ~blackjack();           //Default destructor
        void recieve_card();    //Gives player their next card
        void print_hand();      //Prints players current hand
        bool went_bust();       //If player>21, return 1 (lost)
        bool compare();         //Check if house>player
};


#endif