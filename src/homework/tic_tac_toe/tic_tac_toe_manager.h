#include <vector>
#include <string>
#include "tic_tac_toe.h"

using namespace std;

#ifndef TICTACTOEMANAGER_H
#define TICTACTOEMANAGER_H

class TicTacToeManager {
    private:
        int x_win = 0;
        int o_win = 0;
        int ties = 0;
        vector<unique_ptr<TicTacToe>> games;
        void update_winner_count(string winner);
    public:
        void save_game(unique_ptr<TicTacToe>& b);
        friend ostream& operator<<(std::ostream & out, const TicTacToeManager & manager);
        void get_winner_total(int& x_win, int& o_win, int&t);
};

#endif