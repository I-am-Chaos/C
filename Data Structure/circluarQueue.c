#include <stdio.h>
#include <stdlib.h>
void cqinsert ();
void cqdelete ();
void cqdisplay();
int cq[10],front = -1,rear = -1,maxsize = 5;
void main()
{
    int ch;
    while(1)
    {
        printf("\n1.CQueue Insert: ");
        printf("\n2.CQueue delete: ");
        printf("\n3.CQueue display: ");
        printf("\n4.Exit");
        printf("\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            cqinsert();
            break;
            case 2:
            cqdelete();
            break;
            case 3:
            cqdisplay();
            break;
            case 4:
            exit(0);
            default:
            printf("\nInvalid Choice");
            break;
        }
    }
}
void cqinsert()
{
    int item;
    if ((front == 0 && rear == maxsize -1) || (front == rear +1))
    {
        printf("\nCQueue Overflow");
    }
    else
    {
        printf("\nEnter value to be inserted: ");
        scanf("%d",&item);
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
     else if (rear == maxsize -1)
    rear = 0;
    else
    rear ++;
    cq[rear] = item;
    }
}
void cqdelete()
{
    int item;
    if (front == -1)
    {
        printf("\nCQueue Underflow");
    }
    else
    {
        item = cq[front];
        printf("\nValue deleted: %d",item);
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == maxsize -1)
        front = 0;
        else
        front++;
    }
}
void cqdisplay()
{
    int i;
    if (front == -1)
    printf("\n Queue is empty");
    else
    {
        printf("\nElements of CQueue are:\n");
        printf("Front ---> ");
        if (front <= rear)
        {
            for (i=front;i<=rear;i++)
            printf("%d\t",cq[i]);
        }
        else
        {
            for (i=front;i<=maxsize -1;i++)
            printf("\t%d\t",cq[i]);
            for (i=0;i<=rear;i++)
            printf("%d\t",cq[i]);
        }
        printf("<--- Rear");
    }
}