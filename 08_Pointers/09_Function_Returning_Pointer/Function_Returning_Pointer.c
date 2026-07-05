                /* Program to demonstrate a function returning a pointer */

#include <stdio.h>

int* getLargest(int *a, int *b)
{
    if (*a > *b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int num1 = 25;
    int num2 = 40;
    int *result;

    result = getLargest(&num1, &num2);

    printf("Largest number = %d\n", *result);

    return 0;
}
