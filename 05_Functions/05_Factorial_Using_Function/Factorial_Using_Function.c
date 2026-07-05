                            /* Program to find the factorial of a number using a function */

#include <stdio.h>

unsigned long long factorial(int number);

int main()
{
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    printf("Factorial of %d = %llu\n", number, factorial(number));

    return 0;
}

unsigned long long factorial(int number)
{
    int i;
    unsigned long long result = 1;

    for (i = 1; i <= number; i++)
    {
        result = result * i;
    }

    return result;
}
