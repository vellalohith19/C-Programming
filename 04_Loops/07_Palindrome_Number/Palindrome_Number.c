                    /* Program to check whether a number is a palindrome */

#include <stdio.h>

int main()
{
    int number, originalNumber, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (number != 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }

    if (originalNumber == reverse)
    {
        printf("%d is a Palindrome number.\n", originalNumber);
    }
    else
    {
        printf("%d is not a Palindrome number.\n", originalNumber);
    }

    return 0;
}
