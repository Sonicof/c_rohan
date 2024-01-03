#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Global variable for the head of the list
struct Node* head = NULL;

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to initialize an empty doubly linked list
void initializeList() {
    head = NULL;
}

// Function to insert a new node at the beginning of the list
void insertAtBeginning(int value) {
    struct Node* newNode = createNode(value);
    newNode->next = head;

    if (head != NULL) {
        head->prev = newNode;
    }

    head = newNode;
}

// Function to insert a new node at the end of the list
void insertAtEnd(int value) {
    struct Node* newNode = createNode(value);

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

// Function to insert a new node at a given position
void insertAtPosition(int value, int position) {
    struct Node* newNode = createNode(value);

    if (position == 1) {
        newNode->next = head;
        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
        return;
    }

    struct Node* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position\n");
        free(newNode);
        return;
    }

    newNode->prev = temp;
    newNode->next = temp->next;

    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }

    temp->next = newNode;
}

// Function to delete a node with a given value from the list
void deleteNode(int value) {
    struct Node* temp = head;

    while (temp != NULL && temp->data != value) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value not found in the list\n");
        return;
    }

    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    } else {
        head = temp->next;
    }

    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    free(temp);
}

// Function to display the elements of the list
void displayList() {
    struct Node* temp = head;

    printf("Doubly Linked List: ");

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

// Example usage
int main() {
    initializeList();

    insertAtBeginning(3);
    insertAtEnd(5);
    insertAtPosition(4, 2);
    insertAtBeginning(2);

    displayList();

    deleteNode(5);

    displayList();

    return 0;
}
