// https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/

#include<stdio.h>

int fib(int n) {

    int a = 0, b = 1, c, i;

    if (n == 0)
        return a;

    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {

    for (int x = 0; x <= 10; x++)
        printf("%d ", fib(x));

    return 0;
}