                  /* Program to check whether a number is prime */

#include <stdio.h>

int main()
{
    int number, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
    {
        printf("%d is a Prime number.\n", number);
    }
    else
    {
        printf("%d is not a Prime number.\n", number);
    }

    return 0;
}
