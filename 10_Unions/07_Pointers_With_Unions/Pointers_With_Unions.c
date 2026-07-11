                    /* Program to demonstrate pointers with unions */

#include <stdio.h>

union Employee
{
    int id;
    float salary;
    char grade;
};

int main()
{
    union Employee emp;
    union Employee *ptr;

    ptr = &emp;

    ptr->id = 101;
    printf("Employee ID : %d\n", ptr->id);

    ptr->salary = 55000.50;
    printf("Employee Salary : %.2f\n", ptr->salary);

    ptr->grade = 'A';
    printf("Employee Grade : %c\n", ptr->grade);

    return 0;
}
