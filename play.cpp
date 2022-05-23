#include <string> 
#include <iostream> 
#include "play.h"
using namespace std; 

void Play::run(){
    casino game1;
    string yesno;
    cout << "Start Game: ";
    cin >> yesno;

    while (yesno != "yes" && yesno != "no") {
        cout << "Invalid Input! Expect 'yes' or 'no'" << endl;
        cin >> yesno;
    }

    while (yesno == "yes") {
        
        blackjack *b = new blackjack();
        
               
        
        
       int bet = 0;
       cout << "Your Bet: ";
       cin >> bet;
        while(game1.chips - bet < 0 || bet < 0){
            cout << "Input invalid. Bet must be poitive number less than your totlal chips!";
            cin >> bet;
        }  

        int gameStatus = 0;
        while (gameStatus == 0) { //somehow move all of this into its own function
            string hitsit = "NULL";
            cout<<"Sit or hit?"<<endl; 
            cin>>hitsit;
            if (hitsit == "?") {
                b->print_hand();
            } else if(hitsit == "sit") {
                if(b->compare()) {
                    cout << "You lose!" << endl;
                    game1.chips =9 ;
                    cout<<"HI!!!"<<endl;
                    gameStatus = 1;
                } else {
                    cout << "You win!" << endl;
                    game1.chips = game1.chips + bet ;
                    gameStatus = 1;            
                }
            } else if (hitsit=="hit") {
                b->recieve_card();
                if (b->went_bust()) {
                    cout << "BUST, house wins!" << endl;
                   game1.chips = game1.chips - bet ;
                    gameStatus = 1;
                }
            } else {
                cout << "Input must be 'hit', 'sit', or '?'." << endl;
            }
        }
        cout << "Your total winning: " << chips << " chips" << endl;
        cout << "Play again?: ";
        cin >> yesno;
        while (yesno != "yes" && yesno != "no") {
            cout << "Invalid Input! Expect 'yes' or 'no'" << endl;
            cin >> yesno;
        }
    }

    cout << "Thanks for playing!" << endl;    
cout<<game1.chips<<endl;
};
