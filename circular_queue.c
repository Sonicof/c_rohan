#include <stdio.h> 
#include <stdlib.h>

# define max 6  

int queue[max];    
int front=-1;  
int rear=-1;  

// function to insert an element in a circular queue  
void enqueue(int element)  
{  
    if(front==-1 && rear==-1)   // condition to check queue is empty  
    {  
        front=0;  
        rear=0;  
        queue[rear]=element;  
    }  
    else if((rear+1)%max==front)  // condition to check queue is full  
    {  
        printf("\nQueue is overflow..cannot queue %d",element);  
    }  
    else  
    {  
        rear=(rear+1)%max;       // rear is incremented  
        queue[rear]=element;     // assigning a value to the queue at the rear position.  
    }  
}  
  
// function to delete the element from the queue  
int dequeue()  
{  
    if((front==-1) && (rear==-1))  // condition to check queue is empty  
    {  
        printf("\nQueue is underflow..");  
    }  
    else if(front==rear)  
    {  
       printf("\nThe dequeued element is %d", queue[front]);  
       front=-1;  
       rear=-1;  
    }   
    else  
    {  
        printf("\nThe dequeued element is %d", queue[front]);  
        front=(front+1)%max;  
    }  
}  

// function to display the elements of a queue  
void display()  
{  
    int i = front;  
    if (front == -1 && rear == -1)  
    {  
        printf("\nQueue is empty..");  
    }  
    else  
    {  
        printf("\nElements in the Queue are: ");  
        do  
        {  
            printf("%d, ", queue[i]);  
            i = (i + 1) % max;  
        } while (i != (rear + 1) % max);  // Stop when we reach one position past the rear
    }  
}

void enqueue(int element);
int dequeue();
void display();

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);

    display();

    dequeue();
    dequeue();

    enqueue(50);
    enqueue(60);

    display();
    enqueue(10);
    dequeue();
    dequeue();
    dequeue();
    display();
    dequeue();

    return 0;
}
