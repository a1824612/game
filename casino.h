#ifndef CASINO_H
#define CASINO_H

#include <iostream> 
#include <string> 
using namespace std; 

class casino{
    protected:

    public: 
        int chips;          //integer storing the number of chips the player has
        casino();           //default casino constructor: welcome player to the game
        int* get_chips();   //function to return a pointer to the number of chips the player currently has
    
};





#endif