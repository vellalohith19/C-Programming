                        /* Program to demonstrate nested structures */

#include <stdio.h>

struct Address
{
    char city[30];
    char state[30];
    int pincode;
};

struct Student
{
    int id;
    char name[30];
    float marks;
    struct Address address;
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

    printf("Enter City: ");
    scanf("%29s", student1.address.city);

    printf("Enter State: ");
    scanf("%29s", student1.address.state);

    printf("Enter Pincode: ");
    scanf("%d", &student1.address.pincode);

    printf("\nStudent Details\n");
    printf("----------------------------\n");
    printf("ID       : %d\n", student1.id);
    printf("Name     : %s\n", student1.name);
    printf("Marks    : %.2f\n", student1.marks);
    printf("City     : %s\n", student1.address.city);
    printf("State    : %s\n", student1.address.state);
    printf("Pincode  : %d\n", student1.address.pincode);

    return 0;
}
