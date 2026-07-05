                                /* Program to print Fibonacci series using a function */

#include <stdio.h>

void fibonacci(int terms);

int main()
{
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    fibonacci(terms);

    return 0;
}

void fibonacci(int terms)
{
    int first = 0, second = 1, next, i;

    printf("Fibonacci Series:\n");

    for (i = 1; i <= terms; i++)
    {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }
}
