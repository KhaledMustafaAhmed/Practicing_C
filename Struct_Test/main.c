#include <stdio.h>
#include "readLine.h"

#define NAME_LENGTH 25
#define MAX_PARTS 100

struct part {
    int number;
    char name[MAX_PARTS];
    int on_hand;
}inventory[MAX_PARTS];

int num_parts = 0;

int find_part(int number);
void insert(void);
void update(void);
void search(void);
void print(void);
/********************************************************************************
 *  main: prompts the user to enter an operation code, then calls the functions *
 * ******************************************************************************
*/
int main(void)
{
    char code;
    while(1)
    {
        printf("Enter operation code: ");
        scanf(" %c",&code);
        switch(code)
        {
            default: printf("Error Code operation"); break; 
            case 'i': 
            insert();
            break;
            case 'u': 
            update();
            break;
            case 's': 
            search();
            break;
            case 'p': 
            print();
            break;
            case 'q': 
            return 0;
            break;
        }
        printf("\n");
    }

    return 0;
}

int find_part (int number)
{
    int i;
    for(i=0; i<num_parts; i++)
    {
        if(inventory[i].number == number)
            return i;
    }
    return -1;
}

void insert()
{
    int part_number;
    if(num_parts == MAX_PARTS)
    {
        printf("Database is Full.\n");
        return;
    }
    printf("Enter part number: ");
    scanf("%d",&part_number);
    if(find_part(part_number) >= 0)
    {
        printf("number is already exists.\n");
        return;
    }
    inventory[num_parts].number = part_number;
    printf("Part name : ");
    read_line(inventory[num_parts].name, NAME_LENGTH);
   
    printf("Part On_hand : ");
     scanf("%d",&inventory[num_parts].on_hand);
    num_parts++;
}

void search(void)
{
    int part_number,i;
    printf("enter searching number: ");
    scanf("%d",&part_number);
    i = find_part(part_number);
    if(i >= 0)
    {
        printf("Part name: %s\n", inventory[i].name);
        printf("Part quantity: %d\n", inventory[i].on_hand);
    }
    else
    {
        printf("part not found\n");
    }
}

void update(void)
{
    int part_number,i, change;
    printf("enter updating number: ");
    scanf("%d",&part_number);
    i = find_part(part_number);
    if(i >= 0)
    {
        printf("Enter changing quantity: ");
        scanf("%d",&change);
        inventory[i].on_hand += change;
    }else
    {
        printf("part not found\n");
    }
}

void print(void)
{
    int i;
    printf("Part number  Part name  Quantity\n");
    for(i=0;i<num_parts;i++)
    {
        printf("%7d     %-25s%11d\n",inventory[i].number, inventory[i].name, inventory[i].on_hand);
    }
}