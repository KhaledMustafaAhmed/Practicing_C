/*  
5. Create a structure named "Employee" to store employee details such as employee ID, name, and salary. 
Write a program to input data for three employees, find the highest salary employee, and display their information.
*/

#include <stdio.h>

typedef struct _Employee{
int ID;
char name[50];
int salary;
}_Employee;

int main(void)
{
    _Employee employeeArr[3],employee_HighestSal;
    int i;
    for(i=0;i<3;i++)
    {
        printf("Employee %d ID ",i);
        scanf("%d",&employeeArr[i].ID);
        printf("Employee %d Name ",i);
        scanf("%s",&employeeArr[i].name);
        printf("Employee %d Salary ",i);
        scanf("%d",&employeeArr[i].salary);
    }
    if(employeeArr[0].salary >= employeeArr[1].salary &&  employeeArr[0].salary >= employeeArr[2].salary)
    {
        employee_HighestSal = employeeArr[0];
    }
    else if(employeeArr[1].salary >= employeeArr[0].salary &&  employeeArr[1].salary >= employeeArr[2].salary)
    {
        employee_HighestSal = employeeArr[1];
    }
    else
    {
        employee_HighestSal = employeeArr[2];
    }
    printf("Highest Employee salary: \n");
    printf("Employess ID %d\n",employee_HighestSal.ID);
    printf("Employess Salary %d\n",employee_HighestSal.salary);

    printf("Employess name %s\n",employee_HighestSal.name);
    
    return 0;
}