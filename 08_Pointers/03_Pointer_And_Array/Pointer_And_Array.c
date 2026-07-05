                                  /* Program to access array elements using pointers */

#include <stdio.h>

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr;
    int i;

    ptr = numbers;

    printf("Array elements using pointer:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }

    printf("\n");

    return 0;
}
