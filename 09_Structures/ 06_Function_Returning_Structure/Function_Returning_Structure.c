                         /* Program to demonstrate a function returning a structure */

#include <stdio.h>

struct Student
{
    int id;
    char name[30];
    float marks;
};

struct Student getStudent()
{
    struct Student student;

    student.id = 101;

    sprintf(student.name, "Lohith");

    student.marks = 92.5;

    return student;
}

int main()
{
    struct Student student1;

    student1 = getStudent();

    printf("Student Details\n");
    printf("----------------------\n");
    printf("ID    : %d\n", student1.id);
    printf("Name  : %s\n", student1.name);
    printf("Marks : %.2f\n", student1.marks);

    return 0;
}
