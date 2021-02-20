// https://projecteuler.net/problem=3

/**
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ?
 **/

#include <math.h>
#include <stdio.h>

int isPrime(long);

int main (){

    long a = 600851475143;
    int big = 1;

    for (long i = 2; i <= a; i++) {
        if (a % i == 0 && isPrime(i)) {
            a = a / i;
            big = i;
        }
    }
    printf("Result: %d\n", big);
    return 0;
}

int isPrime(long n) {
    if (n == 1) {
        return 0;
    }
    for (int i = 2; i < sqrt(n) + 1; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}