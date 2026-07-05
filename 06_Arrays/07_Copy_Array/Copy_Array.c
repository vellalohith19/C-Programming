                            /* Program to copy one array to another */

#include <stdio.h>

int main()
{
    int source[5], destination[5];
    int i;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &source[i]);
    }

    for (i = 0; i < 5; i++)
    {
        destination[i] = source[i];
    }

    printf("Copied array elements:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", destination[i]);
    }

    return 0;
}
