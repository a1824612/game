#ifndef PLAY_H
#define PLAY_H

#include <string> 
#include "blackjack.h"
#include "chip.h"

class Play: public chip{




    public: 
        void plus_chips();    //these functions will have differtent implementations in each game
        void minus_chips();
        void run();










};












#endif