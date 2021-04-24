#include <vector>
#include <string>
#include "tic_tac_toe.h"

using namespace std;

#ifndef TICTACTOE3_H

class TicTacToe3: public TicTacToe{
    public:
        TicTacToe3(): TicTacToe(3){};

    private:
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();

};
#define TICTACTOE3_H

#endif