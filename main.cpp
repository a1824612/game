#include <iostream> 
#include "blackjack.h" 
#include "play.h"
#include "casino.h" 
#include <stdlib.h>
#include <time.h>

using namespace std;  

int main(){
    srand(time(NULL));  //seed the randomiser
     
    Play *_blackjack;   //

    _blackjack->run();  //run the game

    return 0; 
}