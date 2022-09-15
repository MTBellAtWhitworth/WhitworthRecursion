///////////////////////////////////////
//Main.cpp contains code for executing a series of recursive
// functions for pedagogical purposes.
//
//Code originally written for VS2012 by Ed Walker and Kent Jones.
//Comments added and ported to VS2019 by Matthew Bell for FA'22.
//////////////////////////////////////

#include <iostream>
#include <string>
#include <fstream>
#include "Node.h"
#include "Problems.h" //<==Defines prototypes for the functions defined in Problems.cpp

using namespace std;

// Global variables
stack<string> stack_of_words;
Node<string>* list_of_words;

//An initialization function to serve main()
void initialize();

int main() {

	initialize();

	// Problem 1
	cout << "Problem 1:\n";
	cout << "Fibonacci for 100 is " << fibonacci(100) << endl;

	// Problem 2
	cout << "Problem 2:\n";
	cout << "Height of stack is " << height(stack_of_words) << endl;

	// Problem 3
	cout << "Problem 3:\n";
	print_stack(stack_of_words);
	cout << endl;

	// Problem 4
	cout << "Problem 4:\n";
	print_list(list_of_words);
	cout << endl;

	// Problem 5
	cout << "Problem 5:\n";
	string sentence = "!372SC enod lleW";
	cout << reverse_string(sentence) << endl;

}

//An initialization function to serve main()
void initialize() {
	ifstream fin("..\\Story.txt");
	if (fin.fail()) {
		cout << "Fail to open file\n";
		throw string("Unable to initialize stack");
	}
	list_of_words = NULL;
	string word;
	while (fin >> word) {
		stack_of_words.push(word);
		list_of_words = new Node<string>(word, list_of_words);
	}
	fin.close();
}