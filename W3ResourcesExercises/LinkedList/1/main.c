/*
1. Write a program in C to create and display a Singly Linked List.
Test Data :
Input the number of nodes : 3
Input data for node 1 : 5
Input data for node 2 : 6
Input data for node 3 : 7
Expected Output :
 Data entered in the list :                                                                                   
 Data = 5                                                                                                     
 Data = 6                                                                                                     
 Data = 7 
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int data;
struct node *next;
}_node_t;

_node_t * head = NULL;
void create_linkdedList(int n);
void display_linked_list(void);
int main(void)
{
    int num;

    // Displaying the purpose of the program
    printf("\n\n Linked List : To create and display Singly Linked List :\n");
    printf("-------------------------------------------------------------\n");
    printf(" Input the number of nodes : ");
    scanf("%d", &num);
    create_linkdedList(num);
    display_linked_list();



    return 0;
}
void create_linkdedList(int n)
{
    _node_t *temp = NULL;
    _node_t *stNode = (_node_t *)malloc(sizeof(_node_t));
    int num, i;
    if(stNode == NULL)
    {
        printf("Can not allocate memory");

    }
    else
    {
        printf("Input data for node 1: ");
        scanf("%d", &stNode->data);
        stNode->next = NULL;
        temp = stNode;
        head = stNode;

        for(i=2; i<=n; i++)
        {
            _node_t* fnode = (_node_t*)malloc(sizeof(_node_t));
            if(fnode == NULL)
            {
                printf("Can not allocate memory");
                break;
            }
            else
            {
                printf("Input data for node %d: ", i);
                scanf("%d", &fnode->data);
                fnode->next = NULL;
                temp->next = fnode;
                temp = temp->next;
            }

        }
    }
}

void display_linked_list(void)
{
    _node_t* tmp = head;
    if(tmp != NULL)
    {
        while(tmp !=NULL)
        {
            printf("%d \n", tmp->data);
            tmp = tmp->next;
        }
    }
}