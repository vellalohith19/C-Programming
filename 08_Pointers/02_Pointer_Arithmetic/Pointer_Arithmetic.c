                            /* Program to demonstrate pointer arithmetic */

#include <stdio.h>

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr;

    ptr = numbers;

    printf("Initial Address : %p\n", (void *)ptr);
    printf("Initial Value   : %d\n\n", *ptr);

    ptr++;

    printf("After ptr++\n");
    printf("Address : %p\n", (void *)ptr);
    printf("Value   : %d\n\n", *ptr);

    ptr++;

    printf("After ptr++ again\n");
    printf("Address : %p\n", (void *)ptr);
    printf("Value   : %d\n", *ptr);

    return 0;
}
