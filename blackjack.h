#ifndef BLACKJACK_H
#define BLACKJACK_H

#include<string>
#include<iostream>

using namespace std;

class blackjack {
    protected:
        int house;
        int player;
        string hand[10][2];
        int round;
        string cards[13] = {"ace","2","3","4","5","6","7","8","9","10","jack","queen","king"};
        string suit[4] = {"diamonds","clubs","spaids","hearts"};

    public:
        blackjack();        //Default constructor sets player=0, house=rnd(1-12)+rnd(1-12), hand[] = 0
        ~blackjack();
        void recieve_card(); //Gives player their next card
        void print_hand();  //Prints players current hand
        bool went_bust();   //If player>21, return 1
        bool compare();
};


#endif