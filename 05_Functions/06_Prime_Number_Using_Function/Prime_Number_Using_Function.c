              /* Program to check whether a number is prime using a function */

#include <stdio.h>

int isPrime(int number);

int main()
{
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (isPrime(number))
    {
        printf("%d is a Prime number.\n", number);
    }
    else
    {
        printf("%d is not a Prime number.\n", number);
    }

    return 0;
}

int isPrime(int number)
{
    int i;

    if (number <= 1)
    {
        return 0;
    }

    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
