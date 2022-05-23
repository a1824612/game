#include "chip.h"
#include "betEdit.h"
#include "casino.h"

void betEdit::plus_chips(int bet) {
   casino->chips = chips + bet;
}

void betEdit::minus_chips(int bet) {
    casino->chips = casino::chips - bet;
}