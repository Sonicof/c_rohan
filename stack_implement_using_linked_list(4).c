#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Global variable for the top of the stack
struct Node* top;

void initialize() {
    top = NULL;
}

struct Node* createNode(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;

}
// Function to push an element onto the stack
void push(int data) {
    struct Node* newNode = createNode(data);
    newNode->next = top;
    top = newNode;
}

// Function to pop an element from the stack
void pop() {
    if (top == NULL) {
        printf("Stack underflow. Cannot pop from an empty stack.\n");
        return;
    }

    struct Node* temp = top;
    top = top->next;
    free(temp);
}

// Function to peek at the top element of the stack
int peek() {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return -1; // Assuming -1 as an indicator of an empty stack
    }
    return top->data;
}

// Function to check if the stack is empty
int isEmpty() {
    return top == NULL;
}

// Function to view the elements of the stack
void viewStack() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }

    struct Node* current = top;
    printf("Stack elements: ");
    while (current != NULL) {
        printf("%d | ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Function to free the memory allocated for the stack
void cleanup() {
    while (top != NULL) {
        pop();
    }
}

int main() {
    initialize();

    push(10);
    push(20);
    push(30);

    printf("Top element: %d\n", peek());
    viewStack();

    pop();
    printf("Top element after pop: %d\n", peek());
    viewStack();

    pop();
    pop(); // Trying to pop from an empty stack
    viewStack();

    cleanup();

    return 0;
}
