                     /* Program to search an element in an array (Linear Search) */

#include <stdio.h>

int main()
{
    int numbers[5];
    int i, key, found = 0;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < 5; i++)
    {
        if (numbers[i] == key)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("%d found at index %d\n", key, i);
    }
    else
    {
        printf("%d not found in the array.\n", key);
    }

    return 0;
}
