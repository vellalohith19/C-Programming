                /* Program to reverse an array */

#include <stdio.h>

int main()
{
    int numbers[5];
    int i;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("Array in reverse order:\n");

    for (i = 4; i >= 0; i--)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}
