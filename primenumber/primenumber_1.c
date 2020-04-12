#include<stdio.h>

int isPrimeNumber(int n) {

    int isPrime = 1;

    for (int x = 2; x < n; x++) {
        if ((n % x) == 0) {
            isPrime = 0;
        }
    }

    return isPrime;
}

int main() {

    for (int x = 0; x < 1000; x++) {
        if (isPrimeNumber(x)) {
            printf("%d is prime number\n", x);
        }
    }

    return 0;
}