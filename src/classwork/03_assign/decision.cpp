//cpp
#include <string>
#include "decision.h"
#include <math.h>

std::string get_letter_grade_using_if(int grade)
{
    if (grade >= 90)
    {
        return "A";
    }

    if (grade >= 80 && grade < 90)
    {
        return "B";
    }

    if (grade >= 70 && grade < 80)
    {
        return "C";
    }

    if (grade >= 60 && grade < 70)
    {
        return "D";
    }

    // return "F" if none of the above conditions are met. Does not include conditional logic (e.g. if grade < 60) because
    // if a grade does not fall into any of the other categories, then it is an "F" by process of elimination
    return "F";
}

std::string get_letter_grade_using_switch(int grade)
{

    // find the quotient without the remainder when dividing a grade by 10. Since the floor function returns a double,
    // the result must be cast to an int;
    int quotient = (int)floor(grade / 10);
    switch (quotient)
    {

    case 10:
        return "A";
        break;
    case 9:
        return "A";
        break;
    case 8:
        return "B";
        break;
    case 7:
        return "C";
        break;
    case 6:
        return "D";
        break;
    default:
        return "F";
    }
}