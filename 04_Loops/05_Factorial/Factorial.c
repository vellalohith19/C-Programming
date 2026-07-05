                 /* Program to find the factorial of a number */

#include <stdio.h>

int main()
{
    int number, i;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %llu\n", number, factorial);

    return 0;
}
