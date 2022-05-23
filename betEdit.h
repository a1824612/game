#ifndef BETEDIT_H
#define BETEDIT_H
#include "chip.h"

class betEdit: public chip{
    public:
        void plus_chips(int bet);    //these functions will have differtent implementations in each game
        void minus_chips(int bet);
};

#endif