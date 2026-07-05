                           /* Function with arguments and without return value */

#include <stdio.h>

void displaySum(int num1, int num2);

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    displaySum(num1, num2);

    return 0;
}

void displaySum(int num1, int num2)
{
    printf("Sum = %d\n", num1 + num2);
}
