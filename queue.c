#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 50

int queue[MAXSIZE];
int front=-1,rear=-1;

int isempty()
{
  return(front == -1 && rear == -1);  
}

int isfull()
{
    return(rear == MAXSIZE-1); //reason : in queue element enters only from back
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
        printf("%d is Queued \n",a);
    }
}

void dequeue()
{
    if (isempty()) 
    {
        printf("Queue is empty. Cannot dequeue\n");
    }
    else
    {
        int a=queue[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        front=front+1;
        printf("%d Dequeued \n",a);
    }
}

void display() 
{
    if (isempty()) 
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) 
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() 
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();
    display();
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();
    display();enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();
    display();
    

    return 0;
}
 
