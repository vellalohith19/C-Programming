                       /* Program to demonstrate the basics of unions */

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

    data.i = 100;
    printf("Integer Value  : %d\n", data.i);

    data.f = 25.75;
    printf("Float Value    : %.2f\n", data.f);

    data.ch = 'A';
    printf("Character Value: %c\n", data.ch);

    return 0;
}
