//write includes statements

//write using statements for cin and cout

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/

#include <iostream>
#include "loops.h"

int main()
{
	int input;

	do
	{
		std::cout << "Enter a number between 1 and 10 to calculate the factorial. Enter 0 to quit.\n";
		std::cin >> input;
		if (input > 0 && input < 11)
		{	
			std:: cout << "The factorial of ";
			std:: cout << input;
			std:: cout << " is: \n";
			std::cout << factorial(input);
			std::cout << "\n";
		}
		else
		{
			// Gently scold the user for entering a number greater
			// than 10 or less than 1 (but not 0)
			std::cout << "Please enter a number that is between 1 and 10. You entered: ";
			std::cout << input;
			std::cout << "\n";
		}

	} while (
		input != 0);

	return 0;
}