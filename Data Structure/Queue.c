#include <stdio.h>
#include <stdlib.h>
void qinsert();
void qdelete();
void qdisplay();
int q[10],front=-1,rear=-1,maxsize=5;
void main()
{
    int ch;
    do
    {
        printf("\n1.Queue Insert");
        printf("\n2.Queue delete");
        printf("\n3.Queue display");
        printf("\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            qinsert();
            break;
            case 2:
            qdelete();
            break;
            case 3:
            qdisplay();
            break;
            case 4:
            exit(0);
            default:
            printf("\nInvalid Choice");
            break;
        }
    } while(1);
}
void qinsert()
{
    int item;
    if (rear == maxsize - 1)
    {
        printf("\nQueue Overflow");
    }
    else
    {
        printf("\nEnter value to be inserted: ");
        scanf("%d",&item);
        if (front == -1)
        {
            front =0;
            rear = 0;
        }
        else
        rear = rear +1;
        q[rear]=item;
    }
}
void qdelete()
{
    int item;
    if (front == -1)
    {
        printf("\nQueue Underflow");
    }
    else
    {
        item = q[front];
        printf("\nValue deleted = %d",item);
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        front = front + 1;
    }
}
void qdisplay()
{
    int i;
    if (front == -1)
    {
        printf("\nQueue is empnty");
    }
    else
    {
        printf("\nFront --->");
        for (i=front;i<=rear;i++)
        printf("%d\t",q[i]);
        printf("<--- Rear");
    }
}