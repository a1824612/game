#include "chip.h"
#include "betEdit.h"

void betEdit::plus_chips(int bet) {
    game1.chips = game1.chips + bet;
}

void betEdit::minus_chips(int bet) {
    game1.chips = game1.chips - bet;
}