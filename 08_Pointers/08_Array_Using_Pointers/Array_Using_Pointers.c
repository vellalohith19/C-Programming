                 /* Program to input and display array elements using pointers */

#include <stdio.h>

int main()
{
    int arr[5];
    int *ptr;
    int i;

    ptr = arr;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("\nArray elements are:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }

    printf("\n");

    return 0;
}
