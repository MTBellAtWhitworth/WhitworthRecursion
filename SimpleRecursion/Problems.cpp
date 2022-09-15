///////////////////////////////////////
//Problems.cpp contains code for a series of recursive
// functions for pedagogical purposes.
//
//Code originally written for VS2012 by Ed Walker and Kent Jones.
//Comments added and ported to VS2019 by Matthew Bell for FA'22.
//////////////////////////////////////

#include <iostream>
#include <stack>
#include <string>
#include "Problems.h"
#include "Node.h"
using namespace std;

/**
   The five parts of a recursive solution:

   1. CHECK If the problem is "small enough"
   2.     Solve the small problem (base case) directly.
   Else
   3.     Break the problem into one or moresmaller sub-problems
   4.     Solve each sub-problem recursively
   5.     Combine the solution of the sub-problems into a solution to the whole problem (optional)
*/


/**
  Problem 1 - Fibonaccis Series
  fibonacci(N) = 1 if N = 1 or 2
  fibonacci(N) = fibonacci(N-1) + fibonacci(N-2) for N > 2
  Ask yourself:
  What is / are the base cases
  Given a large N, how can you make N become this simple case? 
  How will you combine the solutions to your sub-problems to derive your solution for the whole problem?
*/

int fibonacci(int N) {
	// TODO: Complete this implementation

	return 0;
}

/**
  Problem 2 - return the height of this stack
  Ask yourself:
  What is the simplest stack to solve? --> base case
  Given a tall stack, how can you make the stack become this simple case? How do you make the stack smaller?
  How will you combine the solutions to your sub-problem to derive your solution for the whole problem?
*/
int height(stack<string> words) {
	// TODO: Complete this implementation

	return 0;
}

/**
  Problem 3 - print the words from a stack starting from the bottom to the top, separated by space
  Ask yourself:
  What is the simplest stack to print? --> base case
  Given a tall stack, how can you make the stack become this simple case? 
  What will you print to cout in each recursive call such that the combined result is the solution?
  */
void print_stack(stack<string> words) {
	if (words.empty()) { // I have an empty stack.  Nothing to do.  Base case!
		return ;
	} else {
		string word = words.top();  // This is the word at the top of the stack
		// TODO: Complete this implementation

	}
}

// Problem 4 - Print the words starting from the end to the front of the list separated by space
// Your input is a single-linked list, terminated with NULL.  Each "node" in the list is define in Node.h.
// Objective: Apply a known solution in a different context
void print_list(Node<string> *words) {
	if (words == NULL) { // I have reached the end of my list.  Base case!
		return ;
	} else {
		string word = words->data; // This is the word stored in the current node
		// TODO: Complete this implementation

	}
}

// Problem 5 - reverse a string and return it
// A favorite interview question!
// You can consult http://www.cplusplus.com/reference/string/string/ 
string reverse_string(string sentence) {
	// TODO: Define a recursive solution to reverse a string
	// Yes, there are other ways of doing this, but solving this recursively
	// allows the interviewer to access your understanding of recursion.

	return "";
}