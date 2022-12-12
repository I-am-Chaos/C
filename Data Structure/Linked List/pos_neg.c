#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
append (struct node **,int);
display(struct node*);
void main()
{
    system("cls");
    int i,e;
    struct node *p = NULL;
    struct node *pos = NULL;
    struct node *neg = NULL;
    printf("Enter 8 elements into Linked List:\n");
    for (i=1;i<=8;i++)
    {
        scanf("%d",&e);
        append(&p,e);
        if (e>0)
        append(&pos,e);
        else
        append(&neg,e);
    }
    printf("\nElements of the linked list:");
    display(p);
    printf("\nElements of the postive linked list:");
    display(pos);
    printf("\nElements of the negative linked list:");
    display(neg);
    getch();
}
append(struct node **q,int num)
{
    struct node *temp,*r;
    temp = *q;
    if (*q==NULL)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=num;
        temp->link=NULL;
        *q = temp;
    }
    else
    {
        while(temp->link!=NULL)
        temp=temp->link;
        r = (struct node *)malloc(sizeof(struct node));
        r->data=num;
        r->link=NULL;
        temp->link=r;
    }
    return;
}
display(struct node *q)
{
    printf("\n");
    while(q!=NULL)
    {
        printf("%d\t",q->data);
        q=q->link;
    }
    return;
}