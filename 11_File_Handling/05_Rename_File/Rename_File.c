              /* Program to rename a file */

#include <stdio.h>

int main()
{
    if (rename("student.txt", "student_record.txt") == 0)
    {
        printf("File renamed successfully.\n");
    }
    else
    {
        printf("Error renaming file.\n");
    }

    return 0;
}
