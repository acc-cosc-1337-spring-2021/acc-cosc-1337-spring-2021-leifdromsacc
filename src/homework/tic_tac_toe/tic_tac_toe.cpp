#include "tic_tac_toe.h"
#include <iostream>

using namespace std;

void TicTacToe::set_winner()
{
    if (player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}

bool TicTacToe::check_diagonal_win()
{
    if ((pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X") || (pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X"))
    {
        return true;
    }

    if ((pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O") || (pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O"))
    {
        return true;
    }

    return false;
}

bool TicTacToe::check_row_win()
{

    if ((pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X") || (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X") || (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X"))
    {
        return true;
    }

    if ((pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O") || (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O") || (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O"))
    {
        return true;
    }

    return false;
}

bool TicTacToe::check_column_win()
{

    if ((pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X") || (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X") || (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X"))
    {
        return true;
    }

    if ((pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O") || (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O") || (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O"))
    {
        return true;
    }

    return false;
}

void TicTacToe::set_next_player()
{
    if (player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for (int i = 0; i < (int)pegs.size(); i++)
    {
        if (pegs[i] == "")
        {
            return false;
        }
    }
    // return true if none of the members of the vector 'pegs' are empty quotes
    return true;
}

void TicTacToe::clear_board()
{

    for (int i = 0; i < (int)pegs.size(); i++)
    {
        pegs[i] = "";
    }
}

bool TicTacToe::game_over()
{

    bool hasWinner = check_row_win() || check_column_win() || check_diagonal_win();

    if (hasWinner)
    {
        set_winner();
        return true;
    }
    else if (check_board_full())
    {
        winner = "C";
        return true;
    }
    return false;
}

void TicTacToe::start_game(string first_player)
{

    if (first_player == "X" || first_player == "O")
    {
        player = first_player;
        clear_board();
    }
};

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

const string TicTacToe::get_player()
{
    return player;
};

const string TicTacToe::get_winner()
{
    return winner;
}

ostream &operator<<(ostream &out, const TicTacToe &game)
{
    {
        for (int i = 0; i < (int)game.pegs.size(); i++)
        {
            if (game.pegs[i] == "")
            {
                out << " ";
            }
            else
            {
                out << game.pegs[i];
            }

            //print newline if it's the third, sixth, or 9th element
            if ((i + 1) % 3 == 0)
            {
                out << "\n";
            }
        }

        return out;
    }
}

istream &operator>>(istream &in, TicTacToe &game)

{
    string input;

    cout << "What position do you want to mark? Player is: ";
    cout << game.get_player();
    cout << "\n";
    cin >> input;
    game.mark_board(stoi(input));
    cout << "Here is the board: \n";
    return in;
}

void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}
ostream &operator<<(std::ostream &out, const TicTacToeManager &manager)
{

    for (int i = 0; i < manager.games.size(); i++)
    {
        cout << manager.games[i];
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