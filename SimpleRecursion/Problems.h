#include<string>
#include<stack>
#include "Node.h"

#ifndef PROBLEMS_H_
#define PROBLEMS_H_

/**
  Problem 1 - Fibonaccis Series
  fibonacci(N) = 1 if N = 1 or 2
  fibonacci(N) = fibonacci(N-1) + fibonacci(N-2) for N > 2
  Ask yourself:
  What is / are the base cases
  Given a large N, how can you make N become this simple case?
  How will you combine the solutions to your sub-problems to derive your solution for the whole problem?
*/
int fibonacci(int);

/**
  Problem 2 - return the height of this stack
  Ask yourself:
  What is the simplest stack to solve? --> base case
  Given a tall stack, how can you make the stack become this simple case? How do you make the stack smaller?
  How will you combine the solutions to your sub-problem to derive your solution for the whole problem?
*/
int height(std::stack<std::string>);

/**
  Problem 3 - print the words from a stack starting from the bottom to the top, separated by space
  Ask yourself:
  What is the simplest stack to print? --> base case
  Given a tall stack, how can you make the stack become this simple case?
  What will you print to cout in each recursive call such that the combined result is the solution?
  */
void print_stack(std::stack<std::string>);

// Problem 4 - Print the words starting from the end to the front of the list separated by space
// Your input is a single-linked list, terminated with NULL.  Each "node" in the list is define in Node.h.
// Objective: Apply a known solution in a different context
void print_list(Node<std::string>*);

// Problem 5 - reverse a string and return it
// A favorite interview question!
// You can consult http://www.cplusplus.com/reference/string/string/ 
std::string reverse_string(std::string);

#endif
