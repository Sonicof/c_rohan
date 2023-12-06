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
        newNode->next = head; // Point to itself, forming a circle
    } else {
        struct Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head; // Point back to the first node
    }
}

void printList() {
    if (head == NULL) {
        printf("Empty list\n");
        return;
    }

    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head); // Stop when we reach the first node again
    printf(" (head)\n");
}

void deleteNode(int value) {
    if (head == NULL) {
        printf("Cannot delete from an empty list.\n");
        return;
    }

    struct Node* temp = head;
    struct Node* prev = NULL;

    // Find the node with the specified value
    do {
        prev = temp;
        temp = temp->next;
    } while (temp != head && temp->data != value);

    if (temp == head) {
        printf("Node with value %d not found.\n", value);
        return;
    }

    // Remove the node from the circular linked list
    prev->next = temp->next;

    // If the deleted node is the head, update the head
    if (temp == head) {
        head = prev->next;
    }

    free(temp);
}

int main() {
    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);

    printf("Circular Linked List: ");
    printList();

    deleteNode(2);

    printf("Circular Linked List after deletion: ");
    printList();

    return 0;
}
