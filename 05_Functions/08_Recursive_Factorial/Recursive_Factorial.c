                  /* Program to find factorial using recursion */

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
    if (number == 0 || number == 1)
    {
        return 1;
    }

    return number * factorial(number - 1);
}
