                         /* Program to store and display array elements */

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

    printf("Array elements are:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}
