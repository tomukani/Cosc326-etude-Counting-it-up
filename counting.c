#include "counting.h"

uint64 n_choose_k(uint64 n, uint64 k){
  uint64 total = 1;
  return n_choose_k_helper(n, k, total, 1);
}



static uint64 n_choose_k_helper(uint64 n, uint64 k, uint64 total, uint64 i){
    

    if(i > k){
        return total;
    }
    uint64 g = gcd(total, i); // g is the common greates divisor of the total and the current iteration
    total /= g;
    uint64 t = n/(i/g); //t is a modfied value for n that has had much more canceled out, so oveflow wont occur when multiplying by current total
    total *= t;
    return n_choose_k_helper(--n, k, total, ++i);
     
}

/**
 * Function that finds the greates common divisor between two numbers
 * @param x an unsigned long you wish to find the greates common divisor of
 * @param y an unsigned long you wish to find to find the greatest common divisor of
 *
 * @return the greatest common divisor between the two input numbers
 */

static uint64 gcd(uint64 i, uint64 j){
    if( j == 0){
        return i;
    }
    
    return gcd(j, i % j);
} 
/**
 *This main method reads lines from stdin
 *and will call n_choose_k using the
 *first two unsigned long integers it encounters on each line.
 *The main method will print the return value of n_choose_k
 *@param argc The number of command line arguments given to the program
 * The default for argc is one.

 *@param argv The argument vector are the...
 * command line arguments given to the program.
 * argv[0] is always the name of the program.

 *@returns the exit code of the program.
 */
int main(int argc, char *argv[]){
  uint64 first, second;
  printf("Enter two numbers, press enter. Press Ctrl D when finished.\n");
  while (2 == (scanf("%lu %lu", &first, &second))){
    uint64 n;
    uint64 k;
    if (first > second){
      n = first;
      k = second;
    } else {
      n = second;
      k = first;
    }
    uint64 result = n_choose_k(n, k);
    printf("n choose k of %lu and %lu is %lu\n\n", n, k, result);
    first = 0, second = 0, n = 0, k = 0;
  }
  return EXIT_SUCCESS;
}

