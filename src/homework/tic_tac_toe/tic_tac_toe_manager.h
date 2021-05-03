#include <vector>
#include <string>
#include <memory>
#include <iostream>
#include <utility>
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"

using namespace std;

#ifndef TICTACTOEMANAGER_H
#define TICTACTOEMANAGER_H

class TicTacToeManager
{
public:
    TicTacToeManager() = default;
    TicTacToeManager(TicTacToeData data);
    void save_game(unique_ptr<TicTacToe> &b);
    void get_winner_total(int &x_win, int &o_win, int &t);
    friend ostream &operator<<(std::ostream &out, const TicTacToeManager &manager);
    ~TicTacToeManager();

private:
    vector<unique_ptr<TicTacToe>> games;
    TicTacToeData data;
    int x_win{0};
    int o_win{0};
    int ties{0};
    void update_winner_count(string winner);
};

#endif