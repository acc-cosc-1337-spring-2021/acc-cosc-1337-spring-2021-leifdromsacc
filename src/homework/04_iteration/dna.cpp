#include <string>
#include "dna.h"


/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const std::string &dna)
{
    double count = 0;
    for (int i = 0; i < dna.length(); i++)
    {
        if (dna[i] == 'G' || dna[i] == 'C')
        {
            count++;
        }
    }
    return count / dna.length();
}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

std::string get_reverse_string(std::string dna)
{   
    std::string reverse = "";
    for (int i = dna.length() - 1; i >= 0; i--)
    {
        reverse += dna[i];
    }

    return reverse;
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

std::string get_dna_complement(std::string dna)
{
    std::string reversed = get_reverse_string(dna);
    std::string complement = "";
    for (int i = 0; i < reversed.length(); i++)
    {
        switch (reversed[i])
        {
        case 'A':
            complement += 'T';
            break;
        case 'T':
            complement += 'A';
            break;
        case 'G':
            complement += 'C';
            break;
        case 'C':
            complement += 'G';
            break;
        default:
            break;
        }
    }
    return complement;
}
