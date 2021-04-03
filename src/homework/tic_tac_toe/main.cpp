#include "tic_tac_toe.h"
#include <iostream>

using namespace std;

int main()
{
	string input;
	TicTacToe game;
	bool invalidInput = true;

	while (invalidInput == true)
	{
		cout << "Welcome to the game! Enter 'Q' at any time to quit\n";
		cout << "Who is the first player? Enter 'X' or 'O'\n";
		cin >> input;
		cout << "\n";

		if (input == "Q" || input == "q")
		{
			return 0;
		}

		if (input == "X" || input == "O")
		{
			game.start_game(input);
			invalidInput = false;
		}
		else
		{
			cout << "You entered an invalid choice. Please try again.\n";
		}
	}

	while (input != "Q" || input != "q")
	{
		if (game.game_over() == true)
		{
			cout << "Game over! Here is the final board: \n";
			game.display_board();

			invalidInput = true;
			while (invalidInput == true)
			{
				cout << "Who is the first player? Enter 'X' or 'O'\n";
				cin >> input;
				cout << "\n";

				if (input == "Q" || input == "q")
				{
					return 0;
				}

				if (input == "X" || input == "O")
				{
					game.start_game(input);
					invalidInput = false;
				}
				else
				{
					cout << "You entered an invalid choice. Please try again.\n";
				}
			}
		}

		cout << "What position do you want to mark? Player is: ";
		cout << game.get_player();
		cout << "\n";
		cin >> input;
		if (input == "Q" || input == "q")
		{
			return 0;
		}
		else
		{
			game.mark_board(stoi(input));
		}
		cout << "Here is the board: \n";
		game.display_board();
	}

	return 0;
	// 	1) Prompt the user for first player
	// 2) Start the game
	// 3) In a user-controlled loop prompt the user for a position (int type) and call the mark_board tic tac toe class member function.
}