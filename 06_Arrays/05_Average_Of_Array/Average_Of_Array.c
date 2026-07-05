                       /* Program to find the average of array elements */

#include <stdio.h>

int main()
{
    int numbers[5];
    int i, sum = 0;
    float average;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++)
    {
        sum = sum + numbers[i];
    }

    average = (float)sum / 5;

    printf("Average = %.2f\n", average);

    return 0;
}
