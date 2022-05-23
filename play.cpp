#include <string> 
#include <iostream> 
#include "play.h"
using namespace std; 

void Play::plus_chips(){cout<<"arsse";};    //these functions will have differtent implementations in each game
void Play::minus_chips(){cout<<"arsse";};
void Play::run(){
    string yesno;
    cout << "Start Game: ";
    cin >> yesno;
    while (yesno == "yes") {
        blackjack b;
        int gameStatus = 0;
        while (gameStatus == 0) { //somehow move all of this into its own function
            string hitsit = "NULL";
            cout<<"Sit or hit?"<<endl; 
            cin>>hitsit;
            if (hitsit == "?") {
                b.print_hand();
            } else if(hitsit == "sit") {
                if(b.compare()) {
                    cout << "You lose!" << endl;
                    //lose chips
                    gameStatus = 1;
            } else {
                cout << "You win!" << endl;
                //gain chips
                gameStatus = 1;            
            }
        } 
        else if (hitsit=="hit") {
            b.recieve_card();
            if (b.went_bust()) {
                cout << "BUST, house wins!" << endl;
                //lose all bet chips
                gameStatus = 1;
            }
        } else {
            cout << "Input must be 'hit', 'sit', or '?'." << endl;
        }
    }
    }

    
    

};
