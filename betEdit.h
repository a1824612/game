#ifndef BETEDIT_H
#define BETEDIT_H
#include "chip.h"

class betEdit: public chip{
    public:
        virtual void plus_chips(int bet, int* chip);    //virtual fucntion to increase 'chips' by 'bet'.
        virtual void minus_chips(int bet, int* chip);   //virtual fucntion to decrease 'chips' by 'bet'.
};

#endif