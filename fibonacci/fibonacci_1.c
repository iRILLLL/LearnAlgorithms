// https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/

#include<stdio.h>

int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main() {

    for (int x = 0; x <= 10; x++)
        printf("%d ", fib(x));

    return 0;
}