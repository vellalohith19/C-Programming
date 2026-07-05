                   /* Function with arguments and with return value */

#include <stdio.h>

int addNumbers(int num1, int num2);

int main()
{
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = addNumbers(num1, num2);

    printf("Sum = %d\n", sum);

    return 0;
}

int addNumbers(int num1, int num2)
{
    return num1 + num2;
}
