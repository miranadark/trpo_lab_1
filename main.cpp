#include <cstdio>
#include "board_start.h"
#include "board_print_plain.h"
#include "boardgenerate.h"
int main() {
    printf("Welcome to the game \"Chess\".\n"
           "To do at least, enter in the console \"start position of the turn and end position of the move\"\n"
           "Be sure to indicate the sequence through the dash.\n");
    char deck[8][8];
    board_start(deck);
    while(1) {
        board_print_plain(deck);
        board(deck);
    }
}