#include <stdio.h>
#include<string.h>
typedef struct employee
{
    char name[30];
    int emp_id;
    float salary;
} employee;

int main()
{
    employee e1;
    strcpy(e1.name, "Shibu");
    e1.emp_id = 1005;
    e1.salary = 10000;
    printf("The name of the employee: %s\n", e1.name);
    printf("Employee ID of the employee: %d\n", e1.emp_id);
    printf("Salary of the employee: %.3f\n", e1.salary);
    return 0;
}