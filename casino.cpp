#include "casino.h"  
#include <string>
using namespace std; 

casino::casino(){
   chips = 1000;
    cout<<"WELCOME TO BLACKJACK!"<<endl; 
    cout<<"We have given you 1000 chips to play with." << endl;
}

 int casino::get_chips(){
     return chips;
 };