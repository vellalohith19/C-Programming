                               /* Program to demonstrate pointer to structure */

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
    struct Student *ptr;

    ptr = &student1;

    printf("Enter Student ID: ");
    scanf("%d", &ptr->id);

    printf("Enter Student Name: ");
    scanf("%29s", ptr->name);

    printf("Enter Student Marks: ");
    scanf("%f", &ptr->marks);

    printf("\nStudent Details\n");
    printf("----------------------\n");
    printf("ID    : %d\n", ptr->id);
    printf("Name  : %s\n", ptr->name);
    printf("Marks : %.2f\n", ptr->marks);

    return 0;
}
