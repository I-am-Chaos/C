#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *link;
};
void push(struct node **,int);
void pop(struct node **);
void display(struct node *);
void main()
{
    system("cls");
    int e,ch;
    struct node *top = NULL;
    do
    {
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\nEnter data: ");
                    scanf("%d",&e);
                    push(&top,e);
            break;
            case 2: pop(&top);
            break;
            case 3: display(top);
            break;
            case 4: exit(0);
            break;
            default: printf("\nInvalid choice");
        }
    } while (1); 
}
//Push
void push(struct node **top, int num)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp -> data = num;
    temp -> link = *top;
    *top = temp;
}
//Pop
void pop(struct node **top)
{
    struct node *temp;
    if (*top == NULL)
    printf("\nStack underflow");
    else
    {
        temp = *top;
        printf("\nElement popped is %d",temp -> data);
        *top = temp -> link;
        free(temp);
    }
}
//Display
void display(struct node *top)
{
    struct node *temp;
    temp = top;
    while(temp!=NULL)
    {
        printf("\n%d",temp -> data);
        temp = temp -> link;
    }
}