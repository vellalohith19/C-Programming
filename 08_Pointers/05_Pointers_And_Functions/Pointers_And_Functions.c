                            /* Program to pass a pointer to a function */

#include <stdio.h>

void display(int *ptr)
{
    printf("Value = %d\n", *ptr);
}

int main()
{
    int num = 25;

    display(&num);

    return 0;
}
