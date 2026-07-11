                   /* Program to demonstrate typedef with union */

#include <stdio.h>

typedef union
{
    int id;
    float salary;
    char grade;
} Employee;

int main()
{
    Employee emp;

    emp.id = 101;
    printf("Employee ID : %d\n", emp.id);

    emp.salary = 55000.75;
    printf("Employee Salary : %.2f\n", emp.salary);

    emp.grade = 'A';
    printf("Employee Grade : %c\n", emp.grade);

    return 0;
}
