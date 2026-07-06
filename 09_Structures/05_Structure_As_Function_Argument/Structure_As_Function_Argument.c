                   /* Program to pass a structure to a function */

#include <stdio.h>

struct Student
{
    int id;
    char name[30];
    float marks;
};

void displayStudent(struct Student student)
{
    printf("\nStudent Details\n");
    printf("----------------------\n");
    printf("ID    : %d\n", student.id);
    printf("Name  : %s\n", student.name);
    printf("Marks : %.2f\n", student.marks);
}

int main()
{
    struct Student student1;

    printf("Enter Student ID: ");
    scanf("%d", &student1.id);

    printf("Enter Student Name: ");
    scanf("%29s", student1.name);

    printf("Enter Student Marks: ");
    scanf("%f", &student1.marks);

    displayStudent(student1);

    return 0;
}
