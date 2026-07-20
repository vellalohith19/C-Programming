                    /* Program to append data to an existing file */

#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("student.txt", "a");

    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "College : Sri Vasavi Engineering College\n");
    fprintf(fp, "City    : Machilipatnam\n");

    fclose(fp);

    printf("Data appended successfully.\n");

    return 0;
}
