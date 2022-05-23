#include "chip.h"
#include "betEdit.h"

void betEdit::plus_chips(int bet) {
    casino::chips = casino::chips + bet;
}

void betEdit::minus_chips(int bet) {
    casino::chips = casino::chips - bet;
}