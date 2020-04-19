#include <stdio.h>

int main()
{

    int number = 9103019;

    int length = 0;
    int n = number;

    while (n != 0)
    {
        n /= 10;
        length++;
    }

    int numberArray[length];

    int c = 0;
    n = number;

    while (n != 0)
    {
        numberArray[c] = n % 10;
        n /= 10;
        c++;
    }

    for (int x = 0; x < length / 2; x++)
    {
        if (numberArray[x] != numberArray[length - x - 1])
        {
            printf("is not palindrome\n");
            return 0;
        }
    }

    printf("is palindrome\n");

    return 0;
}