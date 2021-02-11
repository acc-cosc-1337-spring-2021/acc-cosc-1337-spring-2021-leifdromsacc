//write include statements
#include <iostream>
#include "variables.h"

double meal_amount, tip_rate, tip_amount, tax_amount, total;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	std::cout << "Enter the meal amount \n";
	std::cin >> meal_amount;

	tax_amount = get_sales_tax(meal_amount);

	std::cout << "Enter the tip rate as a decimal number \n";
	std::cin >> tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	//It is necessary to cast the meal amount to a string in order to include it in the same cout statement
	// as the line item name so they appear on the same line of the printed receipt
	std::cout << "Meal Amount: 	" + std::to_string(meal_amount) + "\n";
	std::cout << "Sales Tax: 	" + std::to_string(tax_amount * 10) + "%" + "\n";
	std::cout << "Tip Amount: 	" + std::to_string(tip_amount) + "\n";
	std::cout << "Total: 	" + std::to_string(total) +  "\n";

	return 0;
}
