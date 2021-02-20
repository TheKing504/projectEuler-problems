// https://projecteuler.net/problem=4

/**
 * A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Find the largest palindrome made from the product of two 3-digit numbers.
 **/

#include <math.h>
#include <stdio.h>

int isPalindrome(int n);

int main (){
    int biggestPalindrome = 1;

    for (int i = 1; i < 1000; i++) {
        for (int j = 1; j < 1000; j++) {
            if (i * j <= biggestPalindrome) {
                continue;
            }
            if (isPalindrome(i * j)) {
                biggestPalindrome = i * j;
            }
        }
    }
    printf("Result: %d\n", biggestPalindrome);

    return 0;
}

int isPalindrome(int n) {
    int r , sum=0, temp;    
    temp=n;    
    while(n > 0) {    
        r = n % 10;    
        sum = (sum * 10) + r;    
        n = n / 10;    
    }    
    if(temp==sum)    
        return 1; 
    else    
        return 0;
}