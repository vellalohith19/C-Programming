                       /* Program to demonstrate a structure inside a union */

#include <stdio.h>

struct Student
{
    int rollNo;
    float marks;
};

union Data
{
    struct Student student;
    char grade;
};

int main()
{
    union Data data;

    data.student.rollNo = 101;
    data.student.marks = 89.5;

    printf("Student Details\n");
    printf("-----------------\n");
    printf("Roll No : %d\n", data.student.rollNo);
    printf("Marks   : %.2f\n", data.student.marks);

    data.grade = 'A';

    printf("\nGrade : %c\n", data.grade);

    return 0;
}
