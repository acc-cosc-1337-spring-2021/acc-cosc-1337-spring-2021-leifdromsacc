#include "tic_tac_toe_manager.h"
#include <iostream>
#include <memory>

using namespace std;

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& b)
{   
    update_winner_count(b->get_winner());
    games.push_back(std::move(b));
}
ostream &operator<<(std::ostream &out, const TicTacToeManager &manager)
{

    for (int i = 0; i < manager.games.size(); i++)
    {
        cout << *manager.games[i];
        cout << "\n";
    }
    return out;
}

void TicTacToeManager::get_winner_total(int &o, int &w, int &t)
{

    o = x_win;
    w = o_win;
    t = ties;
}

void TicTacToeManager::update_winner_count(string winner)
{
    if (winner == "X")
    {
        x_win++;
    }
    if (winner == "O")
    {
        o_win++;
    }
    if (winner == "C")
    {
        ties++;
    }
}