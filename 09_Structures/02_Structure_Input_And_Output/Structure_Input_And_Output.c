                  /* Program to read and display structure members */

#include <stdio.h>

struct Student
{
    int id;
    char name[30];
    float marks;
};

int main()
{
    struct Student student1;

    printf("Enter Student ID: ");
    scanf("%d", &student1.id);

    printf("Enter Student Name: ");
    scanf("%29s", student1.name);

    printf("Enter Student Marks: ");
    scanf("%f", &student1.marks);

    printf("\nStudent Details\n");
    printf("----------------------\n");
    printf("ID    : %d\n", student1.id);
    printf("Name  : %s\n", student1.name);
    printf("Marks : %.2f\n", student1.marks);

    return 0;
}
