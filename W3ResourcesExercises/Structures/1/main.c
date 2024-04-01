/*  
1. Create a structure called "Student" with members name, age, and total marks. 
Write a C program to input data for two students, display their information, and find the average of total marks.
*/

#include <stdio.h>

typedef struct Student{
char *name;
int age;
float marks;
}Student;
int main(void)
{
    Student arr[2];
    int i, avg = 0;
    for(i=0; i<2; i++)
    {
        printf("Student arr[%d] name: ", i);
        scanf("%s", &arr[i].name);
        printf("Student arr[%d] age: ", i);
        scanf("%d", &arr[i].age);
        printf("Student arr[%d] marks: ", i);
        scanf("%f", &arr[i].marks);
    }
    printf("Average marks : %f\n",  (arr[0].marks + arr[1].marks) / 2);
    





    return 0;
}