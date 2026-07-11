                                        /* Program to demonstrate the size of a union */

#include <stdio.h>

union Data
{
    int i;
    float f;
    char ch;
    double d;
};

int main()
{
    printf("Size of int    : %zu bytes\n", sizeof(int));
    printf("Size of float  : %zu bytes\n", sizeof(float));
    printf("Size of char   : %zu byte\n", sizeof(char));
    printf("Size of double : %zu bytes\n", sizeof(double));

    printf("\nSize of union Data : %zu bytes\n", sizeof(union Data));

    return 0;
}
