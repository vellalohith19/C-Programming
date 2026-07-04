          /* Program to print natural numbers from 1 to N */

#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}
