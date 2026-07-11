                       /* Program to demonstrate input and output using unions */

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

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Employee ID = %d\n", emp.id);

    printf("\nEnter Employee Salary: ");
    scanf("%f", &emp.salary);

    printf("Employee Salary = %.2f\n", emp.salary);

    printf("\nEnter Employee Grade: ");
    scanf(" %c", &emp.grade);

    printf("Employee Grade = %c\n", emp.grade);

    return 0;
}
