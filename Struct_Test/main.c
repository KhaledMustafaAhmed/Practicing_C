#include <stdio.h>
#include <stdlib.h>
#include "readLine.h"

#define NAME_LENGTH 25
#define MAX_PARTS 100

struct part {
    int number;
    char name[MAX_PARTS];
    int on_hand;
    struct part *next;
};

struct part *inventory = NULL;
struct part* find_part(int number);
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

struct part * find_part (int number)
{
    struct part *p;
    for(p = inventory; p!=NULL && number > p->number; p=p->next);
    if(p!=NULL && number == p->number)
        return p;
    return NULL;
}

void insert()
{
    struct part *cur, *prev, *new_node;
    new_node = malloc(sizeof(struct part));
    if(new_node == NULL)
    {
        printf("Database is full");
        return;
    }
    printf("Enter Part Number: ");
    scanf("%d",&new_node->number);

    for(cur = inventory, prev = NULL; cur != NULL && new_node->number > cur->number; prev = cur, cur = cur->next);
    if(cur != NULL && new_node->number == cur->number)
    {
         printf("part is already Exist");
         free(new_node);
        return;
    }
    printf("Part Name: ");
    read_line(new_node->name, NAME_LENGTH);
    printf("Part Quantity: ");
    scanf("%d",&new_node->on_hand);
    new_node->next =cur;
    if(prev == NULL)
        inventory = new_node;
    else
        prev->next = new_node;    
}

void search(void)
{
    int part_number;
    struct part *p;
    printf("enter searching number: ");
    scanf("%d",&part_number);
    p = find_part(part_number);
    if(p!= NULL)
    {
        printf("Part name: %s\n", p->name);
        printf("Part quantity: %d\n", p->on_hand);
    }
    else
    {
        printf("part not found\n");
    }
}

void update(void)
{
    int part_number,change;
    struct part *p;
    printf("enter updating number: ");
    scanf("%d",&part_number);
    p = find_part(part_number);
    if(p != NULL)
    {
        printf("Enter changing quantity: ");
        scanf("%d",&change);
        inventory->on_hand += change;
    }else
    {
        printf("part not found\n");
    }
}

void print(void)
{
   struct part *p;
    printf("Part number  Part name  Quantity\n");
    for(p=inventory;p!=NULL;p= p->next)
    {
        printf("%7d     %-25s%11d\n",p->number, p->name, p->on_hand);
    }
}