// https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/

#include<stdio.h>

int fib(int n) {

    int f[n+2];
    int i;

    f[0] = 0;
    f[1] = 1;

    for (i = 2; i <= n; i++)
        f[i] = f[i-1] + f[i-2];
        
    return f[n];
}

int main() {

    for (int x = 0; x <= 10; x++)
        printf("%d ", fib(x));

    return 0;
}