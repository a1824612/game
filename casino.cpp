#include "casino.h"  
#include <string>
using namespace std; 

casino::casino(){
   
    cout<<"WELCOME TO THE CASINO!"<<endl; 
    cout<<"please choose a number corresponding to the game you wish to play: \n";
    cout<<"1.   Blackjack"<<endl;
    cout<<"2.   Poker"<<endl;
    cout<<"3.   Roulette"<<endl;
    cout<<"Enter Number :";
    cin>>game;
    cout<<endl;
    cout<<"Enter the number of chips you want to play with: ";
    cin>>chips;
}

 int casino::get_chips(){
     return chips;
 }; 
int casino::get_game(){
    return game;
};