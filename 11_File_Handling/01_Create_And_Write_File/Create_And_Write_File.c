                      /* Program to create a file and write data into it */

#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("student.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "Name : Lohith\n");
    fprintf(fp, "Branch : ECE\n");
    fprintf(fp, "Year : 3rd Year\n");

    fclose(fp);

    printf("Data written successfully.");

    return 0;
}
