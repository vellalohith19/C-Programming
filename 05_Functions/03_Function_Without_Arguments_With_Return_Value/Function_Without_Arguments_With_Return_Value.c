                         /* Function without arguments and with return value */

#include <stdio.h>

int getNumber();

int main()
{
    int number;

    number = getNumber();

    printf("Number = %d\n", number);

    return 0;
}

int getNumber()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    return num;
}
