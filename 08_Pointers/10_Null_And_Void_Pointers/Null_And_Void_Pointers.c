              /* Program to demonstrate NULL and void pointers */

#include <stdio.h>

int main()
{
    int num = 50;

    int *ptr = NULL;
    void *vptr;

    printf("NULL Pointer:\n");

    if (ptr == NULL)
    {
        printf("ptr is a NULL pointer.\n");
    }

    vptr = &num;

    printf("\nVoid Pointer:\n");
    printf("Address stored in vptr = %p\n", vptr);
    printf("Value using void pointer = %d\n", *(int *)vptr);

    return 0;
}
