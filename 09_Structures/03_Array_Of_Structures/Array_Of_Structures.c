                 /* Program to demonstrate an array of structures */

#include <stdio.h>

struct Student
{
    int id;
    char name[30];
    float marks;
};

int main()
{
    struct Student students[3];
    int i;

    printf("Enter details of 3 students:\n\n");

    for (i = 0; i < 3; i++)
    {
        printf("Student %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &students[i].id);

        printf("Enter Name: ");
        scanf("%29s", students[i].name);

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    printf("\nStudent Details\n");
    printf("------------------------------\n");

    for (i = 0; i < 3; i++)
    {
        printf("Student %d\n", i + 1);
        printf("ID    : %d\n", students[i].id);
        printf("Name  : %s\n", students[i].name);
        printf("Marks : %.2f\n\n", students[i].marks);
    }

    return 0;
}
