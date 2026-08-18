//Write a program of dynamic stack
// Enrollment no 92500588016

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push()
{
    int value;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter value to push :");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=top;
    top = newnode;
    printf("%d pushed onto stack \n",value);
}

void pop()
{
    if(top == NULL)
    {
        printf("Stack underflow : Stack is empty \n");
    }
    else
    {
        struct node*temp=top;
        printf("%d popped from stack \n",top->data);
        top=top->next;
        free(temp);
    }
}

void display()
{
    struct node*temp=top;
    if(temp==NULL)
    {
        printf("\n Stack is empty");
    }
    else
    {
        printf("Stack elements are :\n");
    }

    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

void main()
{
    int choice;
    while(1)
    {
        printf("\n1. PUSH\n2. POP\n3. Display\n4. Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch (choice)
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
            exit(0);

        default:
            printf("Invalid Choice\n");
        }
    }
}
