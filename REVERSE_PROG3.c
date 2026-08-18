//3] Write a program to print string in reverse order using stack.
//Enrollment no 92500588016

#include<stdio.h>
#define max 30
int stack[max],top=-1;

void push(char value);
char pop();

void main()
{
    char str[20];
    int i=0;

    printf("Enter a String");
    gets(str);

    while(str[i]!='\0')
    {
        push(str[i]);
        i++;
    }
    while(top != -1)
    {
        printf("\n %c",pop());
    }
}

void push(char value)
{
    if(top == max -1 )
    {
        printf("stack Overflow\n");
    }
    else
    {
        top++;
        stack[top]=value;
        return 0;
    }
}
char pop()
{
    int val;
    if(top == -1)
    {
        printf("Stack underflow\n");
        return -1;
    }
    else{
        val=stack[top];
        top--;
        return val;
    }
}

