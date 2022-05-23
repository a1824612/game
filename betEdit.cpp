#include "chip.h"
#include "betEdit.h"
#include "casino.h"

void betEdit::plus_chips(int bet, int* chip) {
   *chip = *chip + bet;
}

virtual void betEdit::minus_chips(int bet, int* chip) {
    *chip = *chip - bet;
}