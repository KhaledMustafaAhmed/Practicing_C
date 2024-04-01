/*  
3. Create a structure named Book to store book details like title, author, and price. 
Write a C program to input details for three books, find the most expensive and the lowest priced books, and display their information.
*/

#include <stdio.h>

typedef struct Book{
    char *title;
    char *author;
    float price;
}Book;
int main(void)
{
    Book book[3];
    int i,j;
    for(i=0; i<3; i++)
    {
        printf("input title for book[%d]: ", i);
        scanf("%s", &book[i].title);
        printf("input author for book[%d]: ", i);
        scanf("%s", &book[i].author);
        printf("input price for book[%d]: ", i);
        scanf("%f", &book[i].price);
    }
    Book expensive;
    if(book[0].price >= book[1].price && book[0].price >= book[2].price)
    {
        expensive = book[0];
    }
    else if(book[1].price >= book[2].price && book[1].price >= book[0].price)
    {
        expensive = book[1];
    }
    else
    {
        expensive = book[2];
    }
    Book lowest;
    if(book[0].price <= book[1].price && book[0].price <= book[2].price)
    {
        lowest = book[0];
    }
    else if(book[1].price <= book[2].price && book[1].price <= book[0].price)
    {
        lowest = book[1];
    }
    else
    {
        lowest = book[2];
    }
    printf("\nMost Expensive Book:\n");
    printf("Title: %s\n", expensive.title);
    printf("Author: %s\n", expensive.author);
    printf("Price: %.2f\n", expensive.price);

    // Display information for the lowest priced book
    printf("\nLowest Priced Book:\n");
    printf("Title: %s\n", lowest.title);
    printf("Author: %s\n", lowest.author);
    printf("Price: %.2f\n", lowest.price);




    return 0;
}