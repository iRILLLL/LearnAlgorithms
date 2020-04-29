#include <stdio.h>

int main()
{

    int arr[] = {6, 192, 0, -30, 100, 2, 33};
    int size = sizeof arr / sizeof *arr;

    for (int i = 0; i < size; i++)
    {

        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }

        if (minIndex != i)
        {
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}