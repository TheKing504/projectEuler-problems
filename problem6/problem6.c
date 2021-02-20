// https://projecteuler.net/problem=6

#include <stdio.h>

int main() {

    int sum1 = 1;

    for (int i = 2; i <= 100; i ++) {
        sum1 += i * i;
    }

    long sum2 = 1;

    for (int i = 2; i <= 100; i++) {
        sum2 += i;
    }
    sum2 = sum2 * sum2;

    long dif = sum2 - sum1;

    printf("Result: %ld\n", dif);

    return 0;
}