#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};
struct node *front;
struct node *rear;
void initializeQueue()
{
    front=NULL;
    rear=NULL;
}
struct node* createnode(int d)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=d;
    newnode->next=NULL;
    return newnode;
}
void enqueue(int d)
{
    struct node *nn=createnode(d);
    if(front==NULL)
    {
        front=nn;
        rear=nn;
        printf("Enqueued %d\n",d);
        return;
    }
    struct node* temp = front;
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }
    
    temp->next = nn;
    rear=nn;
    printf("Enqueued %d\n",d);
}
void dequeue()
{
    if(front==NULL)
    {
        printf("No element left in Queue!!\n");
        return;
    }
    struct node* temp = front;
    front=front->next;
    printf("Dequeued %d\n",temp->data);
    free(temp);
}

void display()
{
    struct node* temp = front;
    while (temp != NULL) {
        printf("%d | ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void main()
{
    initializeQueue();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    
    display();
    
    dequeue();
    
    display();
    
    dequeue();
    
    display();
    
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    
    
    
}
