                             /* Program to find the power of a number using a function */

#include <stdio.h>

int power(int base, int exponent);

int main()
{
    int base, exponent;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    printf("%d ^ %d = %d\n", base, exponent, power(base, exponent));

    return 0;
}

int power(int base, int exponent)
{
    int i, result = 1;

    for (i = 1; i <= exponent; i++)
    {
        result = result * base;
    }

    return result;
}
