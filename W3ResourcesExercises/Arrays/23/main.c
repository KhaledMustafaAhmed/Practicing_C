/*
23. Write a program in C to merge one sorted array into another sorted array.
Pivot element is the only element in input array which is smaller than it's previous element.
A pivot element divided a sorted rotated array into two monotonically increasing array.
Expected Output :
The given Large Array is : 10 12 14 16 18 20 22
The given Small Array is : 11 13 15 17 19 21
After merged the new Array is :
10 11 12 13 14 15 16 17 18 19 20 21 22
*/

#include <stdio.h>
#define SIZE  50
#define MAX   100

void mergearray(int *bgArr, int size_bgArr, int *smArr, int size_smArr)
{
    int bigArrIdx = size_bgArr-1;
    int smallArrIdx = size_smArr-1;
    int mergeArrIdx = (size_bgArr+size_smArr) - 1 ;
    while(bigArrIdx >=0 && smallArrIdx >=0 )
    {
        if(bgArr[bigArrIdx] >= smArr[smallArrIdx])
        {
            bgArr[mergeArrIdx] = bgArr[bigArrIdx];
            mergeArrIdx--;
            bigArrIdx--;
        }
        else
        {
            bgArr[mergeArrIdx] = smArr[smallArrIdx];
            mergeArrIdx--;
            smallArrIdx--;
        }
    }
    if(smallArrIdx<0)
    {
        while(bigArrIdx>=0)
        {
            bgArr[mergeArrIdx] = bgArr[bigArrIdx];
            mergeArrIdx--;
            bigArrIdx--;
        }
    }
    if(bigArrIdx<0)
    {
        while(smallArrIdx>=0)
        {
            bgArr[mergeArrIdx] = smArr[smallArrIdx];
            mergeArrIdx--;
            smallArrIdx--;
        }
    }

}
int main(void)
{   
    int bigArr[13] = {10, 12, 14, 16, 18, 20, 22};
    int smlArr[6] = {11, 13, 15, 17, 19, 21}; 
    int i;

    // Print the large array
    printf("The given Large Array is :  ");
    for (i = 0; i < 7; i++) {
        printf("%d  ", bigArr[i]);
    } 	
    printf("\n");

    // Print the small array
    printf("The given Small Array is :  ");
    for (i = 0; i < 6; i++) {
        printf("%d  ", smlArr[i]);
    } 	
    printf("\n");	

    // Merge the arrays and print the merged array
    mergearray(bigArr, 7, smlArr, 6);
    printf("After merging, the new Array is :\n");
    for (i = 0; i < 13; i++) {
        printf("%d ", bigArr[i]);
    }
    

    
    return 0;
}