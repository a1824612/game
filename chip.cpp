#include "chip.h"
#include "betEdit.h"
#include "casino.h"

void chip::plus_chips(int bet, int* chipa) {
   *chipa = *chipa + bet;
}

void chip::minus_chips(int bet, int* chipa) {
    *chipa = *chipa - bet;
}