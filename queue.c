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

void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full. Cannot enqueue %d\n", value);
        return;
    }

    if (isEmpty()) {
        front = 0;
    }

    rear++;
    queue[rear] = value;

    printf("Enqueued: %d\n", value);
}

int dequeue() {
    int dequeuedValue;

    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue\n");
        return -1;
    }

    dequeuedValue = queue[front];

    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front++;
    }

    printf("Dequeued: %d\n", dequeuedValue);
    return dequeuedValue;
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
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
