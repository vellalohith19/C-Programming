                        /* Program to print Fibonacci series using recursion */

#include <stdio.h>

int fibonacci(int number);

int main()
{
    int terms, i;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series:\n");

    for (i = 0; i < terms; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

int fibonacci(int number)
{
    if (number == 0)
    {
        return 0;
    }

    if (number == 1)
    {
        return 1;
    }

    return fibonacci(number - 1) + fibonacci(number - 2);
}
