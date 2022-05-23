#include <iostream> 
#include "blackjack.h" 
#include "casino.h" 
#include <stdlib.h>
#include <time.h>

using namespace std;  

int main(){
srand(time(NULL));
  casino game1; 
  Play *_blackjack;

  *_blackjack->run();



    //test what game needs to be activated
 
/*
    blackjack b;
    int lost = 0;
    while (lost == 0) { //somehow move all of this into its own function
        string hitsit = "NULL";
        cout<<"Sit or hit?"<<endl; 
        cin>>hitsit;
        if (hitsit == "?") {
            b.print_hand();
        }
        else if(hitsit == "sit"){
            if(b.compare()) {
                cout << "You lose!" << endl;
                //lose chips
                lost = 1;
            } else {
                cout << "You win!" << endl;
                //gain chips            
            }
        } 
        else if (hitsit=="hit") {
            b.recieve_card();
            if (b.went_bust()) {
                cout << "BUST, house wins!" << endl;
                //Lost all bet chips
                lost = 1;
            }
        } else {
            cout << "Input must be 'hit', 'sit', or '?'." << endl;
        }
    }

  
*/




    return 0; 
}