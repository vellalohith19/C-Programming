                     /* Program to modify structure members using a pointer */

#include <stdio.h>

struct Student
{
    int id;
    char name[30];
    float marks;
};

void updateMarks(struct Student *student)
{
    student->marks = 95.0;
}

int main()
{
    struct Student student1;

    student1.id = 101;

    sprintf(student1.name, "Lohith");

    student1.marks = 90.5;

    printf("Before Update\n");
    printf("----------------------\n");
    printf("ID    : %d\n", student1.id);
    printf("Name  : %s\n", student1.name);
    printf("Marks : %.2f\n", student1.marks);

    updateMarks(&student1);

    printf("\nAfter Update\n");
    printf("----------------------\n");
    printf("ID    : %d\n", student1.id);
    printf("Name  : %s\n", student1.name);
    printf("Marks : %.2f\n", student1.marks);

    return 0;
}
