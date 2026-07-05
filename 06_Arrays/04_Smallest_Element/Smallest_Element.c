                             /* Program to find the smallest element in an array */

#include <stdio.h>

int main()
{
    int numbers[5];
    int i, smallest;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    smallest = numbers[0];

    for (i = 1; i < 5; i++)
    {
        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
    }

    printf("Smallest element = %d\n", smallest);

    return 0;
}
