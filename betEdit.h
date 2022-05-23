#ifndef BETEDIT_H
#define BETEDIT_H
#include "chip.h"

class betEdit: public chip{
    public:
        void plus_chips(int bet, int* chip);    //these functions will have differtent implementations in each game
        virtual void minus_chips(int bet, int* chip);
};

#endif