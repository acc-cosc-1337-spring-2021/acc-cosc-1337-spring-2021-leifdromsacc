#include <vector>
#include <string>

using namespace std;

#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe
{
private:
    void set_next_player();
    void clear_board();
    void set_winner();
    bool check_board_full();
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    string player;
    string winner;
    vector<string> pegs = {"", "", "", "", "", "", "", "", ""};
    	

public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    const string get_player();
    const string get_winner();
    friend ostream& operator<<(ostream& out, const TicTacToe& game);
    friend istream& operator>>(istream& in, TicTacToe& game);
};

class TicTacToeManager {
    private:
        int x_win = 0;
        int o_win = 0;
        int ties = 0;
        vector<TicTacToe> games;
        void update_winner_count(string winner);
    public:
        void save_game(TicTacToe b);
        friend ostream& operator<<(std::ostream & out, const TicTacToeManager & manager);
        void get_winner_total(int& x_win, int& o_win, int&t);
};

#endif