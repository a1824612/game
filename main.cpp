#include <iostream> 
#include "blackjack.h" 
#include "play.h"
#include "casino.h" 
#include <stdlib.h>
#include <time.h>

using namespace std;  

int main(){
    srand(time(NULL)); 
     
    Play *_blackjack;

    _blackjack->run();




    return 0; 
}