#include<stdio.h>
#include<stdlib.h>

#define max 10

int top=-1;
int arr[max];

int isFull()
{
    return top==max-1;
}

int isEmpty()
{
    return top==-1;
}

void push(int a)
{
    if(isFull())
    {
        printf("\nStack is full cannot push : %d",a);
        return;
    }
    arr[++top]=a;
    printf("\nPushed : %d",a);
}

void pop()
{
    if(isEmpty())
    {
        printf("\nStack is empty");
        return;
    }
    printf("\nPopped element : %d ",arr[top--]);
}

void display()
{
    if(isEmpty())
    {
        printf("\nStack is empty");
        return;
    }
    printf("\nStack elements : ");
    for(int i=0;i<=top;i++)
    {
        printf("%d ",arr[i]);
    }
}

void main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    push(10);
    push(11);
    display();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    display();
    
}
