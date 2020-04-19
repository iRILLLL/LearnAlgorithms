// https://en.wikipedia.org/wiki/Primality_test

#include<stdio.h>
#include <time.h>	
#include <unistd.h>

int isPrimeNumber(int n) {

    if (n <= 3) {

        if (n > 1) 
            return 1;
        else
            return 0;

    } else if (n % 2 == 0 || n % 3 == 0) {
        return 0;
    }

    int i = 5;

    while (i * i <= n) {
        if (n % i == 0 || n % (i+2) == 0)
            return 0;
        i += 6;
    }

    return 1;
}

int main() {

    double time_spent = 0.0;

    clock_t begin = clock();

    for (long x = 2; x < 10000; x++) {
        if (isPrimeNumber(x)) {
            printf("%ld ", x);
        }
    }

    clock_t end = clock();

    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Time elpased is %f seconds", time_spent);

    return 0;
}