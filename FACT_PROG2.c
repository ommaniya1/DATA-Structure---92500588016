//2] Write a program to find out factorial of number using stack.

#include<stdio.h>
#define max 30

int stack[max],top=-1;
void push(int value);
int pop();

void main()
{
    int n,i,fact=1;
    printf("\n Enter Value : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        push(i);
    }
    while(top!=-1)
    {
        fact=fact*pop();
    }
    printf("\n Factorial is : %d ",fact);
}
void push(int value)
{
    if(top==max-1)
    {
        printf("\n Stack Overflow");

    }
    else
    {
        top++;
        stack[top]=value;
    }
}
int pop()
{
    int val;
    if(top==-1)
    {
        printf("\n Stack is UNderflow");
        return -1;
    }
    else{
        val=stack[top];
        top--;
        return val;
    }
}
