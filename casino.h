#ifndef CASINO_H
#define CASINO_H

#include <iostream> 
#include <string> 
using namespace std; 

class casino{

    protected: 

       
       


    public: 
        int chips;  //integer storing the number of chips the player has
        casino();           //default casino constructor: ask player for the number of chips they wish to play with and the game they wish to play
        int get_chips();    //function to return the number of chips the player currently has
        int get_game();     //function to return the 'id' of the game the user has chosen
    
};





#endif