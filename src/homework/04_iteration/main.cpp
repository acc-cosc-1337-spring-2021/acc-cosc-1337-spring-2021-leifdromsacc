//write include statements
#include <string>
#include <iostream>
#include "dna.h"
//write using statements
// You want us to use the standard library in this file? Ok no problem.
// Normally, I'd only use the function from the library I need by using
// "std::string" to use the string class from the standard library

using namespace std;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main()
{
	string continueProgram = "Y";
	while (continueProgram == "Y" || continueProgram == "y") {
	string selection = "";
	string dna_sequence = "";
	cout << "Enter 1 for Get GC Content, or 2 for Get DNA Complement\n";
	cin >> selection;
	cout << "\nEnter a DNA sequence in FASTA format:\n";
	cin >> dna_sequence;

	if (selection == "1")
	{
		cout << "Result:\n";
		cout << get_gc_content(dna_sequence);
		cout << "\n";
	}

	if (selection == "2")
	{
		cout << "Result:\n";
		cout << get_dna_complement(dna_sequence);
		cout << "\n";
	}

	cout << "Would you like to continue? Enter 'y' to continue or any other key to quit\n";
	cin >> continueProgram;
	cout << "\n";
	}

	return 0;
}