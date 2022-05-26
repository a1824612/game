#include <string> 
#include <iostream> 
#include "play.h"
using namespace std; 

void Play::run(){
    casino game1;   //create a casino object
    string yesno;   //string container user asnwer to following question
    cout << "Start Game('yes' or 'no'): ";
    cin >> yesno;

    while (yesno != "yes" && yesno != "no") {   //check that the user has given a valid input
        cout << "Invalid Input! Expect 'yes' or 'no'" << endl;  //tell user their input is invalid and what we expect
        cin >> yesno;
    }

    while (yesno == "yes") {    //while the user wants to play
        
        blackjack *b = new blackjack(); //create new blackjack object
        
        int bet = 0;    //set the users bet to 0
        cout << "Your Bet: ";   //ask the use what their bet is
        cin >> bet;
        while(game1.chips - bet < 0 || bet < 0){    //check that the user has given a valid bet (one that is affordable and real)
            cout << "Input invalid. Bet must be poitive number less than your totlal chips!";   //tell user their input is invalid
            cin >> bet;
        }  

        int gameStatus = 0; //dummy index so that for loop runs so long as game has not finished
        while (gameStatus == 0) { //while loop to run game until player has finished
            string hitsit = "NULL"; //string to recieve user input
            cout<<"Sit or hit?"<<endl;  //ask player if they want to 'hit' for 'sit'
            cin>>hitsit;
            if (hitsit == "?") {    //if player is wondering what is in their hand
                b->print_hand();    //print players hand and current score
            } else if(hitsit == "sit") {    //if player has chosen to sit
                if(b->compare()) {  //check if house's score is higher
                    cout << "You lose!" << endl;    //let the player know the house won
                    game1.chips = game1.chips - bet ;   //remove players bet from their amount of chips
                    gameStatus = 1; //tell while loop the game is over
                } else {    //if house didnt win
                    cout << "You win!" << endl;     //let the player know they have won
                    game1.chips = game1.chips + bet ;   //add the players bet to the amount of chips they had
                    gameStatus = 1; //tell while loop the game is over            
                }
            } else if (hitsit=="hit") { //if player has chosen to hit
                b->recieve_card();  //give player a card
                if (b->went_bust()) {   //check it player went bust
                    cout << "BUST, house wins!" << endl;    //if the player did, let them know
                   game1.chips = game1.chips - bet ;    //remove players bet from their amount of chips
                    gameStatus = 1; //tell while loop the game is over
                }
            } else {    //if palyer has given an invalid input
                cout << "Input must be 'hit', 'sit', or '?'." << endl;  //let the player know their input is invalid and give them expected inputs
            }
        }
        cout << "Your total winning: " << game1.chips << " chips" << endl;  //tell the player their current number of chips
        cout << "Play again?: ";    //ask player if they wish to play again
        cin >> yesno;   
        while (yesno != "yes" && yesno != "no") {   //if player has given an invalid input
            cout << "Invalid Input! Expect 'yes' or 'no'" << endl;  //let the player know and tell them expected inputs 
            cin >> yesno;
        }
    }
   
    cout << "Thanks for playing!" << endl;  //thank player for playing our game!

};
