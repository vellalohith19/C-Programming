/* Program to find the largest element in an array */

#include <stdio.h>

int main()
{
    int numbers[5];
    int i, largest;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];

    for (i = 1; i < 5; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    printf("Largest element = %d\n", largest);

    return 0;
}
