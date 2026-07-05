                          /* Program to demonstrate pointer to pointer */

#include <stdio.h>

int main()
{
    int num = 100;
    int *ptr;
    int **dptr;

    ptr = &num;
    dptr = &ptr;

    printf("Value of num            = %d\n", num);
    printf("Address of num          = %p\n", (void *)&num);

    printf("Value stored in ptr     = %p\n", (void *)ptr);
    printf("Value pointed by ptr    = %d\n", *ptr);

    printf("Value stored in dptr    = %p\n", (void *)dptr);
    printf("Value pointed by dptr   = %p\n", (void *)*dptr);
    printf("Final value using dptr  = %d\n", **dptr);

    return 0;
}
