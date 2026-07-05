                  /* Program to demonstrate pointer to a string */

#include <stdio.h>

int main()
{
    char str[] = "Embedded";
    char *ptr;

    ptr = str;

    printf("String using array: %s\n", str);
    printf("String using pointer: %s\n", ptr);

    printf("\nCharacters using pointer:\n");

    while (*ptr != '\0')
    {
        printf("%c ", *ptr);
        ptr++;
    }

    printf("\n");

    return 0;
}
