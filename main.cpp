/*
*	Program: main.cpp (For Lexer)
*
*	Programmers:
* 	  Naveena Chilukuri 	Email: naveenac@csu.fullerton.edu
*	  Rocio Salguero 		Email: salgueroroci@csu.fullerton.edu
*
* 	Date Created: 02/19/17
*	  Description: Main program to output the tokens.
*
* 	Last Modified: 02/09/17
*/

#include <iostream>
#include <fstream>
#include "Lexer.h"

using namespace std;

int main() {
	Lexer lexMe;
	string fileIn;
	cout << "Please enter file name\n";
	cin >> fileIn;

	try {
		lexMe.read_file(fileIn);
		lexMe.addTokens();
		lexMe.print_tokens();
		lexMe.close_file();
	}
	catch (std::ifstream::failure e) {
		std::cerr << "Exception opening/reading/closing file\n";
	}
	//system("pause");
}
