#ifndef CASINO_H
#define CASINO_H

#include <iostream> 
#include <string> 
using namespace std; 

class casino{

protected: 

int chips; 
int game; 


public: 
    casino();
    int get_chips(); 
    int get_game();
    
};





#endif