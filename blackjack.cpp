#include "casino.h"
#include "blackjack.h"
#include <iostream>
#include <string>
#include <random>
#include <time.h>


blackjack::blackjack() {
    int house = (rand() % 10 + 1)+(rand() % 10 + 1);
    int player = 0;
    int round = 0;
}

blackjack::~blackjack() {
    delete[] hand;
    delete &house;
    delete &player;
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
    cout << "Recieved: " << cards[n + m] << " of " << suit[x];
    hand[round][0] = cards[n + m];
    hand[round][1] = suit[x];
    player = player + n + 1;
    if (went_bust()) {
        cout << "BUST, house wins!" << endl;
        //Lost all bet chips
    }   
}

void blackjack::print_hand() {
    for (int i = 0; i < round; i++) {
        cout << hand[i][0] << " of " << hand[i][1] << endl;
    }
}