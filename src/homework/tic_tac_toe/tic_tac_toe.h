using namespace std;
#include <vector>
#include <string>

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
    const void display_board();
    const string get_winner();

};