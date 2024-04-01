/*  
4. Define a structure named Circle to represent a circle with a radius. 
Write a C program to calculate the area and perimeter of two circles and display the results.
*/

#include <stdio.h>
#define PL   3.14
typedef struct circle{
    int r;
}circle;
int main(void){
    circle c1, c2;
    float area, perimeter;
    printf("Circle 1: "); 
    scanf("%d",&c1.r);
    printf("Circle 2: "); 
    scanf("%d",&c2.r);
    perimeter = 2*PL*(c1.r + c2.r);
    area = PL*(c1.r * c1.r) + (c2.r * c2.r);
    printf("Area: %f", area);
    printf("perimeter: %f", perimeter);
    return 0;
}