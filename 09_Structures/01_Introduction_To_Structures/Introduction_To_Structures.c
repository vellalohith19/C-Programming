                   /* Program to demonstrate the basics of structures */

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

    student1.id = 101;

    sprintf(student1.name, "Lohith");

    student1.marks = 92.5;

    printf("Student Details\n");
    printf("----------------------\n");
    printf("ID    : %d\n", student1.id);
    printf("Name  : %s\n", student1.name);
    printf("Marks : %.2f\n", student1.marks);

    return 0;
}
