                /* Program to find the sum of array elements */

#include <stdio.h>

int main()
{
    int numbers[5];
    int i, sum = 0;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++)
    {
        sum = sum + numbers[i];
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
