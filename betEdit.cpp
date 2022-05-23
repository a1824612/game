#include "chip.h"
#include "betEdit.h"
#include "casino.h"

void betEdit::plus_chips(int bet, int* chip) {
   *chip = *chip + bet;     //increase value at chips by 'bet'.
}

void betEdit::minus_chips(int bet, int* chip) {
    *chip = *chip - bet;    //decrease value at chips by 'bet'.
}