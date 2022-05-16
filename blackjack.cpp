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
    int n = rand() % 10;
    int m = 0;
    if (n==9) {
        m = rand() % 3;
    }
    int x = rand() % 4;
    house = (rand() % 10 + 1)+(rand() % 10 + 1);
    player = n+1;
    round = 1;
    hand[0][0] = cards[n + m]; hand[0][1] = suit[x];
    
    cout << "You have: " << cards[n + m] << " of " << suit[x] << endl;
}

blackjack::~blackjack() {
   
}

bool blackjack::went_bust() {
    if (player>21) {
        return 1;
    }
    return 0;
} 

void blackjack::recieve_card() {
    int n = rand() % 10;
    int m = 0;
    if (n==9) {
        m = rand() % 3;
    }
    int x = rand() % 4;
    cout << "Recieved: " << cards[n + m] << " of " << suit[x]<<endl;
    hand[round][0] = cards[n + m];
    hand[round][1] = suit[x];
    player = player + n + 1;       
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