//Write the include statement for types.h here

//Write include for capturing input from keyboard and displaying output to screen

#include <iostream>
#include "types.cpp"

int main()
{
	int num;
	// Prompt the user to enter an integer and press enter or return
	std::cout<<"Enter an integer and press the enter key on a PC or the return ke on a Mac:";
	std::cin>>num;

	int result = multiply_numbers(num);
	// Print the result of multiplying the number by the multiply_numbers function
	std::cout<<"The result is: \n";
	std::cout<<result;
	// Add a newline so that the results aren't smashed into one another
	std::cout<<"\n";

	// Print the result of multiplying the 4 by the multiply_numbers function
	std::cout<<"The result of 4 multiplied by 5 is: \n";
	int num1 = 4;
	result = multiply_numbers(num1);
	std::cout<<result;
	// Add a newline so that the percent symbol isn't on same line as result when using a terminal like ZSH
	std::cout<<"\n";

	return 0;
}
