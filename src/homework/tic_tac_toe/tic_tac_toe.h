using namespace std;
#include <vector>
#include <string>

class TicTacToe
{
private:
    void set_next_player();
    bool check_board_full();
    void clear_board();
    string player;
    vector<string> pegs = {"", "", "", "", "", "", "", "", ""};

public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    const string get_player();
    const void display_board();
};