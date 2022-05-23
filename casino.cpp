#include "casino.h"  
#include <string>
using namespace std; 

casino::casino(){
   
    cout<<"WELCOME TO BALCKJACK!"<<endl; 
    cout<<"Enter the number of chips you want to play with: ";
    cin>>chips;
    while (chips<=0 || chips>10000000){
        cout<<"Value must be between 0 and 10,000,000: "; 
        cin>>chips;
    }
}

 int casino::get_chips(){
     return chips;
 }; 
int casino::get_game(){
    return game;
};