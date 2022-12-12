#include <stdio.h>
#include <stdlib.h>
//#include <alloc.h>
//#include <conio.h>
struct node
{
    int data;
    struct node *link;
};
struct node *start = NULL;
void createlist();
void traverse();
void insert_at_front();
void insert_at_end();
void insert_position();
/*void delete_first();
void delete_end();
void delete_position();
void maximum();
void minimum();
void count();
void sort();
void reverseLL();*/
void main()
{
    system("cls"); //clrscr();
    int ch;
    while(1)
    {
        printf("\n1.Create List");
        printf("\n2.Display");
        printf("\n3.Insert at beginning");
        printf("\n4.Insert at end");
        printf("\n5.Insert at postion");
        printf("\n6.Delete from beginning");
        printf("\n7.Delete from end");
        printf("\n8.Delete from postion");
        printf("\n9.Maximum");
        printf("\n10.Minimum");
        printf("\n11.Count nodes");
        printf("\n12.Reverse list");
        printf("\n13. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: createlist();
            break;
            case 2: traverse();
            break;
            case 3: insert_at_front();
            break;
            case 4: insert_at_end();
            break;
            case 5: insert_position();
            break;
            /*case 6: delete_first();
            break;
            case 7: delete_end();
            break;
            case 8: delete_position();
            break;
            case 9: maximum();
            break;
            case 10: minimum();
            break;
            case 11: count();
            break;
            case 12: sort();
            break;
            case 13: reverseLL();*/
            break;
            default: printf("\nInvalid choice");
        }
    } 
}
void createlist()
{
    int data;
    char count;
    struct node *newnode , *temp;
    temp = start;
    if (start == NULL)
    {
        do
        {
            newnode = malloc(sizeof(struct node));
            if (temp == NULL)
            {
                start = newnode;
                temp = start;
            }
            else
            {
                temp -> link = newnode;
                temp = temp ->link;
            }
            temp ->link = NULL;
            printf("\nEnter data: ");
            scanf("%d",temp -> data);
            printf("\nContinue ??? (Y/N):");
            fflush(stdin);
            scanf("%c",&count);
        } while (count =='Y'||count == 'y');
    }
    else
    printf("\nLinked List aldredy existing ... ");
    //getch
}
void traverse()
{
    struct node *temp;
    if (start == NULL)
        printf("\nList is empty");
    else
    {
        temp = start;
        printf("\n\nPresent data of LInked List: \n\n");
        while (temp!= NULL)
        {
            printf("%d -->",temp->data);
            temp = temp->link;
        }
    } //getch();
}
void insert_at_front()
{
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    printf("\nEnter data: ");
    scanf("%d",&newnode -> data);
    newnode -> link = start;
    start = newnode;
}
void insert_at_end()
{
    struct node *temp , *newnode;
    newnode = malloc(sizeof(struct node));
    printf("\nEnter data: ");
    scanf("%d",&newnode -> data);
    newnode -> link = NULL;
    temp = start;
    while(temp -> link!= NULL)
        temp = temp -> link;
    temp -> link = newnode;
}
void insert_position()
{
    struct node *temp , *newnode;
    int pos , i = 1;
    newnode = malloc(sizeof(struct node));
    printf("\nEnter data: ");
    scanf("%d",&newnode -> data);
    printf("\nEnter the position: ");
    scanf("%d",&pos);
    temp = start;
    while(i<pos -1)
    {
        temp = temp ->link;
        i++;
    }
    newnode -> link = temp ->link;
    temp ->link = newnode;
}
