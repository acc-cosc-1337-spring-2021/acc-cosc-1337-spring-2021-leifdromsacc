#include <vector>
#include <string>
#include <memory>
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"


using namespace std;

#ifndef TICTACTOEDATA_H
#define TICTACTOEDATA_H

class TicTacToeData
{

    
private:
    const string file_name{"tic_tac_toe.dat"};
    	
public:
    void save_games(const vector<unique_ptr<TicTacToe>>& games);
    vector<unique_ptr<TicTacToe>> get_games();

};

#endif