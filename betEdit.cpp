#include "chip.h"
#include "betEdit.h"

void betEdit::plus_chips(int bet) {
    chips = chips + bet;
}

void betEdit::minus_chips(int bet) {
    chips = chips - bet;
}