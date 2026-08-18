//1] Write a program which performs following stack operations. ->push() -> pop() ->peep() -> update()
// Enrollment no 92500588016
#include<stdio.h>
#define MAX 3

int stack[MAX],Top=-1;
void push();
void pop();
void peek();
void update();
void display();

void main()
{
    int op;
    do
    {
        printf("\n 1.Push");
        printf("\n 2.Pop");
        printf("\n 3.Peek");
        printf("\n 4.Update");
        printf("\n 5.Dispay");
        printf("\n 6.Exit \n");
        scanf("%d",&op);

    switch(op)
    {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            update();
            break;

        case 5:
            display();
            break;

    }
    } while(op!=6);
}
void push()
{
    int value;
    printf("\n Enter Value to be inserted..");
    scanf("%d",&value);

    if(Top==MAX-1)
    {
        printf("Stack is Overflow..");
    }
    else
    {
        Top++;
        stack[Top]=value;
    }
}
void pop()
{
    int val;

    if(Top==MAX-1)
    {
        printf("Stack is Underflow..");
    }
    else
    {
        val=stack[Top];
        printf("\n Value is deleted : %d",val);
        Top--;
    }
}
void peek()
{
    if(Top==MAX-1)
    {
      printf("stack is Empty..");
    }
    else
    {
        printf("\n Topmost Value is :%d",stack[Top]);
    }
}
void update()
{
    int i,x;
    printf("\n Enter Index to be Updated : ");
    scanf("%d",&i);

    printf("\n Enter Value to be Updated : ");
    scanf("%d",&x);

    if(Top-i+1<=-1)
    {
        printf("\n Invalid Index..");
    }
    else
    {
        stack[Top-i+1]=x;
    }
}
void display()
{
    int i;
    if(Top==-1)
    {
        printf("\n Stack if Empty..");
    }
    else
    {
        for(i=Top;i>=0;i--)
        {
            printf("\n %d",stack[i]);
        }
    }
}
