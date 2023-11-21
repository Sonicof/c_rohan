#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

int front = -1;
int rear = -1;
int queue[MAX_SIZE];

int isEmpty() {
    return (front == -1 && rear == -1);
}

int isFull() {
    return (rear == MAX_SIZE - 1);
}

void peek()
{
    if(isEmpty())
    {
        printf("\nQueue is empty!!");
    }
    else
    {
        printf("\nThe first element is : %d",queue[front]);
    }
}

void back()
{
    if(isEmpty())
    {
        printf("\nQueue is empty!!");
    }
    else
    {
        printf("\nThe last element is : %d",queue[rear]);
    }
}

void enqueue(int value) {
    if (isFull()) {
        printf("\nQueue is full. Cannot enqueue %d", value);
        return;
    }

    if (isEmpty()) {
        front = 0;
    }

    rear++;
    queue[rear] = value;

    printf("\nEnqueued: %d", value);
}

int dequeue() {
    int dequeuedValue;

    if (isEmpty()) {
        printf("\nQueue is empty. Cannot dequeue");
        return -1;
    }

    dequeuedValue = queue[front];

    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front++;
    }

    printf("\nDequeued: %d", dequeuedValue);
    return dequeuedValue;
}

void display() {
    if (isEmpty()) {
        printf("\nQueue is empty.");
        return;
    }

    printf("\nQueue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    
    peek();
    back();
    
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
