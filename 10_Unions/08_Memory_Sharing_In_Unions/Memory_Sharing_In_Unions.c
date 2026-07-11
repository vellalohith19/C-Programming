                       /* Program to demonstrate memory sharing in unions */

#include <stdio.h>

union Data
{
    int i;
    float f;
    char ch;
};

int main()
{
    union Data data;

    data.i = 65;

    printf("After assigning Integer:\n");
    printf("Integer   : %d\n", data.i);

    data.f = 98.75;

    printf("\nAfter assigning Float:\n");
    printf("Float     : %.2f\n", data.f);

    data.ch = 'A';

    printf("\nAfter assigning Character:\n");
    printf("Character : %c\n", data.ch);

    return 0;
}
