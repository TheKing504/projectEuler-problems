// https://projecteuler.net/problem=5

/**
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 **/

// Below is the easiest but less efficient solution (bruteforce), this problem can be solved by searching lcm of [1,20].
// for more check https://www.geeksforgeeks.org/lcm-of-given-array-elements/

#include <math.h>
#include <stdio.h>

int main (){
    
    long i = 1;
    while (1) {
        int isSmallestMultiple = 1;
        for (int j = 2; j <= 20; j++) {
            if (i % j != 0) {
                isSmallestMultiple = 0;
                break;
            }
        }
        if (isSmallestMultiple) {
            printf("Result: %ld\n", i);
            break;
        }
        i++;
    }
    return 0;
}