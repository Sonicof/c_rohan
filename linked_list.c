#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

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
}

void insertAtBeginning(int value) {
    struct Node* newNode = createNode(value);
    newNode->next = head;
    head = newNode;
}

void deleteAtBeginning() {
    if (head == NULL) {
        printf("Linked list is empty. Cannot delete from an empty list.\n");
        return;
    }

    struct Node* temp = head;
    head = temp->next;
    free(temp);
}

void deleteAtEnd() {
    if (head == NULL) {
        printf("The list is empty. Cannot delete from an empty list.\n");
        return;
    }

    // If the list has only one node
    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }

    // Traverse the list to find the last and second-to-last nodes
    struct Node* temp = head;
    struct Node* prev = NULL;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    // Delete the last node
    free(temp);
    prev->next = NULL;
}

void deleteNode(int value) {
    struct Node* temp = head;
    struct Node* prev = NULL;

    if (temp != NULL && temp->data == value) {
        head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Node with value %d not found.\n", value);
        return;
    }

    prev->next = temp->next;
    free(temp);
}

void printList() {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void freeList() {
    struct Node* temp = head;
    struct Node* next;

    while (temp != NULL) {
        next = temp->next;
        free(temp);
        temp = next;
    }

    head = NULL;
}

int main() {
    
    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);

    insertAtBeginning(0);

    printf("Linked List: ");
    printList();

    deleteNode(2);

    printf("Linked List after deletion: ");
    printList();

    deleteAtBeginning();
    deleteAtEnd();

    printf("Linked List after deleteAtBeginning and deleteAtEnd: ");
    printList();

    freeList();

    return 0;
}
