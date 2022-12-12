#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void insert(struct node **, struct node **,int);
void delete(struct node **,struct node **);
void display(struct node *);
void main()
{
    system("cls");
    int e,ch;
    struct node *front = NULL , *rear = NULL;
    do
    {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\nEnter data: ");
                    scanf("%d",&e);
                    insert(&front,&rear,e);
            break;
            case 2: delete(&front,&rear);
            break;
            case 3: display(front);
            break;
            case 4: exit(0);
            break;
            default: printf("\nInvalid choice");
        }
    } while (1);
}
void insert(struct node **front , struct node **rear , int num)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp -> data = num;
    temp -> link = NULL;
    if (*front == NULL)
    *front = temp;
    else
    (*rear) -> link = temp;
    *rear = temp;
}
void delete(struct node **front , struct node **rear)
{
    struct node *temp;
    if (*front == NULL)
        printf("\nQueue is empty");
    else
    {
        temp = *front;
        printf("\nValue deleted = %d",temp -> data);
        *front = temp -> link;
        free(temp);
        if(*front == NULL) //Only used for last element
        *rear = NULL;
    }
}
void display(struct node *front)
{
    struct node *temp;
    if (front == NULL)
        printf("\nQueue is empty");
    else
    {
        temp = front;
        printf("\nFront -->");
        while(temp!=NULL)
        {
            printf("\t%d",temp -> data);
            temp = temp -> link;
        }
        printf("\t<-- Rear");
    }
}