// https://projecteuler.net/problem=7

#include <math.h>
#include <stdio.h>

int isPrime(long n);

int main() {

    int i = 1;
    int n = 1;

    while (1) {
        if (isPrime(n)) {
            i++;

            if (i == 10001) {
                printf("Result: %d", n);
                break;
            }
        }
        n++;
    }

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