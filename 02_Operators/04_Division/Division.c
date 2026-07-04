                             /* Program to perform division of two numbers */

#include <stdio.h>

int main()
{
    int num1, num2, quotient;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    quotient = num1 / num2;

    printf("Quotient = %d\n", quotient);

    return 0;
}
