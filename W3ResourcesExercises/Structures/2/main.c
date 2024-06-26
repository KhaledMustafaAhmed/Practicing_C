/*  
2. Define a structure named Time with members hours, minutes, and seconds. 
Write a C program to input two times, add them, and display the result in proper time format.
*/

#include <stdio.h>

typedef struct Time{
int hours;
int minutes;
int seconds;
}Time;
int main(void)
{
    Time time[2];
    Time result_time;
    int i;
    for(i=0; i<2; i++)
    {
        printf("input hours for time[%d]: ", i);
        scanf("%d", &time[i].hours);
        printf("input minutes for time[%d]: ", i);
        scanf("%d", &time[i].minutes);
        printf("input seconds for time[%d]: ", i);
        scanf("%d", &time[i].seconds);
    }
     // Add the two times
    result_time.seconds = time[0].seconds + time[1].seconds;
    result_time.minutes = time[0].minutes + time[1].minutes + result_time.seconds / 60;
    result_time.hours = time[0].hours + time[1].hours + result_time.minutes / 60;

    result_time.minutes %= 60;
    result_time.seconds %= 60;
   
    printf("\nResultant Time: %02d:%02d:%02d\n", result_time.hours, result_time.minutes, result_time.seconds);





    return 0;
}