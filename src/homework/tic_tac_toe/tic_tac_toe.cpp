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
    return false;
}

bool TicTacToe::check_row_win()
{

    return false;
}

bool TicTacToe::check_column_win()
{

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
        if (pegs[i] == " ")
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
        pegs[i] = " ";
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

const vector<string> TicTacToe::get_pegs()
{
    return pegs;
}

ostream &operator<<(ostream &out, const TicTacToe &game)
{
    {
        int newlineSize;
        if (game.pegs.size() == 9)
        {
            newlineSize = 3;
        }
        else
        {
            newlineSize = 4;
        }

        for (int i = 0; i < (int)game.pegs.size(); i++)
        {
            out << game.pegs[i];
            if (game.pegs.size() == 9 && (i != 2 && i != 5 && i != 8))
            {
                out << "|";
            }

            if (game.pegs.size() == 16 && (i != 3 && i != 7 && i != 11 && i != 15))
            {
                out << "|";
            }
            //print newline if it's the third, sixth, or 9th element for 3x3 board or fourth, eighth, or 12th for 4x4 board
            if ((i + 1) % newlineSize == 0)
            {
                if (game.pegs.size() == 9 && (i + 1) != 9)
                {
                    out << "\n";
                    for (int j = 0; j < newlineSize + 2; j++)
                    {
                        out << "-";
                    }
                    out << "\n";
                }

                if (game.pegs.size() == 16 && (i + 1) != 16)
                {
                    out << "\n";
                    for (int j = 0; j < newlineSize + 2; j++)
                    {
                        out << "-";
                    }
                    out << "\n";
                }
            }
        }

        out << "\n\n";

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