#include <stdio.h>
#include <stdlib.h>
void push();
void pop();
void display();
int stk[10],maxsize = 5,top = -1;
void main()
{
    system("cls");
    int ch;
    do
    {
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            exit (0);
            default:
            printf("\nInvalid Choice");
            break;
        }
    } while (1);
}
void push()
{
    int item;
    if (top== maxsize - 1)
    {
        printf("\nStack Overflow");
    }
    else
    {
        printf("\nEnter value to be inserted: ");
        scanf("%d",&item);
        top = top +1;
        stk[top]=item;
    }
}
void pop()
{
    int item;
    if (top ==-1)
    {
        printf("\nStack Underflow");
    }
    else
    {
        item = stk[top];
        printf("\nValue popped = %d",item);
        top--;
    }
}
void display()
{
    int i;
    if (top == -1)
    printf("\nStack is empty");
    else
    {
        printf("\nElements of stack are : \n");
        for (i=top;i>=0;i--)
        printf("\n%d",stk[i]);
    }
}
