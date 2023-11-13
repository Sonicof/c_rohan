#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5

int queue[MAXSIZE];
int front=-1,rear=-1;
int isempty()
{
  return(front == -1 && rear == -1);  
}
int isfull()
{
    return(front==0 && rear == MAXSIZE-1)
}
void enqueue(int a)
{
    if(isfull())
    {
        printf("Queue is full\n");
    }
    else
    {
        if(isempty())
        {
           front=0;
           rear=0;
        }
        else
        {
            rear=rear+1;
        }
        queue[rear]=a;
        printf("%d is Queued");
    }
}
