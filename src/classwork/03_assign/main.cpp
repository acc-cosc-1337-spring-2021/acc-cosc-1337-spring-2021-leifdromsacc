//Write the include statement for decisions.h here
#include <iostream>
#include "decision.h"

int main()
{
    int grade;
    std::cout << "Please enter a number grade between 0 and 100 \n";
    std::cin >> grade;
    if (grade >= 0 && grade <= 100)
    {
        std::cout << "The letter grade using if/else statements is: \n";
        std::cout << get_letter_grade_using_if(grade);
        std::cout << "\n";

        std::cout << "The letter grade using switch is: \n";
        std::cout << get_letter_grade_using_switch(grade);
        std::cout << "\n";
    }
    else
    {
        std::cout << "Grade is out of range";
    }
}
