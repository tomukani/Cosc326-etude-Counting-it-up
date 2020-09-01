#ifndef COUNTING_H_
#define COUNTING_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <getopt.h>
#include <limits.h>
/**
 * Shorthand for unsigned long int
 */
typedef unsigned long int uint64;

/**
 * Calculates how many different combinations 
 * of k items you can choose from a set
 * of n items without repetition or order.
 * @param n The n value of n choose k
 * @param k The k value of n choose k
 * @return the result of n choose k
 */
uint64 n_choose_k(uint64 n, uint64 k);
/**
 * Recursively calculates the n choose k of n and k.
 * Called by n_choose_k(uint64 n, uint64 k) to calculate the return value
 * @param n The n value of n choose k
 * @param k The k value of n choose k
 * @returns the result of n choose k
 */
static uint64 n_choose_k_helper(uint64 n, uint64 k, uint64 total, uint64 i);

static uint64 gcd(uint64 i, uint64 j);
/**
 * This main method reads lines from stdin and will call n_choose_k using the first two unsigned long integers it encounters on each line.
 * The main method will print the return value of n_choose_k
 *@param argc The number of command line arguments given to the program
 * The default for argc is one.

 *@param argv The argument vector are the
 * command line arguments given to the program.
 * argv[0] is always the name of the program.

 *@returns the exit code of the program.
 */
int main(int argc, char* argv[]);

#endif
