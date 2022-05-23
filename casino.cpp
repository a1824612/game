#include "casino.h"  
#include <string>
using namespace std; 

casino::casino(){
    chips = 1000;   //give player 1000 chips to start
    cout<<"WELCOME TO BLACKJACK!"<<endl;                        //welcome player to blackjack
    cout<<"We have given you 1000 chips to play with." << endl; //announce our generosity
}

 int* casino::get_chips(){
     return &chips; //return value at chips
 };