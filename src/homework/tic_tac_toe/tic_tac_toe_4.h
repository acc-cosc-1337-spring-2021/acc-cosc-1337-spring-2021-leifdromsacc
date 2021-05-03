#include <vector>
#include <string>
#include "tic_tac_toe.h"

using namespace std;

#ifndef TICTACTOE4_H

class TicTacToe4: public TicTacToe{
    public:
        TicTacToe4(): TicTacToe(4){};
        TicTacToe4(vector<string> p, string winner): TicTacToe(p, winner){};

    private:
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();

};
#define TICTACTOE4_H

#endif