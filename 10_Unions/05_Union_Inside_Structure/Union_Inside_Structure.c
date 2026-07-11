                 /* Program to demonstrate a union inside a structure */

#include <stdio.h>

union EmployeeData
{
    int id;
    float salary;
};

struct Employee
{
    char name[30];
    union EmployeeData data;
};

int main()
{
    struct Employee emp;

    printf("Enter Employee Name: ");
    scanf("%29s", emp.name);

    printf("Enter Employee ID: ");
    scanf("%d", &emp.data.id);

    printf("\nEmployee Details\n");
    printf("-------------------------\n");
    printf("Name : %s\n", emp.name);
    printf("ID   : %d\n", emp.data.id);

    return 0;
}
