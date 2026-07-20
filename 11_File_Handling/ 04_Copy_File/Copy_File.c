                /* Program to copy the contents of one file to another */

#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char ch;

    source = fopen("student.txt", "r");

    if (source == NULL)
    {
        printf("Error opening source file.\n");
        return 1;
    }

    destination = fopen("copy.txt", "w");

    if (destination == NULL)
    {
        printf("Error creating destination file.\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");

    return 0;
}
