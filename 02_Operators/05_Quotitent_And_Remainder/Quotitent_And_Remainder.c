                            /* Program to find quotient and remainder */

#include <stdio.h>

int main()
{
    int num1, num2;
    int quotient, remainder;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    quotient = num1 / num2;
    remainder = num1 % num2;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}
