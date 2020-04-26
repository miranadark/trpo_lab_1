#ifndef TRPO_LAB1_BOARDGENERATE_H
#define TRPO_LAB1_BOARDGENERATE_H

void board(char deck[8][8]);
void reformat_input(char *input, int move[4]);
void make_move(char deck[8][8], int move[]);
int check_move(char deck[8][8], int move[]);
int black_pawn(char deck[8][8], int move[]);
int white_pawn(char deck[8][8], int move[]);

#endif //TRPO_LAB1_BOARDGENERATE_H
