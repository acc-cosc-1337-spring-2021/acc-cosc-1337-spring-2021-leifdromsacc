#include "tic_tac_toe.h"
#include <iostream>

int main()
{
	string input;
	TicTacToe game;
	TicTacToeManager manager;
	bool invalidInput = true;

	while (invalidInput == true)
	{
		cout << "Welcome to the game!\n";
		cout << "Who is the first player? Enter 'X' or 'O'\n";
		cin >> input;
		cout << "\n";

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
			cout << "Game over! ";
			cout << game.get_winner();
			cout << " is the winner! Here is the final board: \n";
			cout << game;
			cout << "\n";
			manager.save_game(game);
			int x = 0;
			int o = 0;
			int t = 0;
			manager.get_winner_total(x, o, t);

			cout << "Here are the totals: \n";
			cout << "X wins ";
			cout << x;
			cout << ", O wins ";
			cout << o;
			cout << ", Ties ";
			cout << t;
			cout << "\n";

			invalidInput = true;
			while (invalidInput == true)
			{
				cout << "Who is the first player? Enter 'X' or 'O', or enter 'Q'\n";
				cin >> input;
				cout << "\n";

				if (input == "Q" || input == "q")
				{
					cout << "Thank you for playing. Here are all the games played: \n";
					cout << manager;
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
		cin >> game;
		cout << game;
	}

	return 0;
}