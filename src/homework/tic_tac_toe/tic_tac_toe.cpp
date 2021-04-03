#include "tic_tac_toe.h";
#include <iostream>;

using namespace std;

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

    return check_board_full();
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

const void TicTacToe::display_board()
{
    for (int i = 0; i < (int)pegs.size(); i++)
    {
        cout << pegs[i];

        //print newline if it's the third, sixth, or 9th element
        if ((i + 1) % 3 == 0)
        {
            cout << "\n";
        }
    }
}