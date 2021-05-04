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
    string player;
    string winner;

protected:
    vector<string> pegs{};
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();
    	
public:
    TicTacToe(int size):pegs(size * size, " "){};
    TicTacToe(vector<string> p, string win): pegs(p), winner(win){}
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    const string get_player();
    const string get_winner();
    const vector<string> get_pegs();
    friend ostream& operator<<(ostream& out, const TicTacToe& game);
    friend istream& operator>>(istream& in, TicTacToe& game);


};

#endif