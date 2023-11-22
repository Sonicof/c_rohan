#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int value;
	struct Node* next;
};

struct Node* head=NULL;

struct Node* createNode(int a)
{
	struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
	if(newnode==NULL)
	{
		printf("\nMemory not allocated");
		exit(1);
	}
	newnode->value=a;
	newnode->next=NULL;
	return newnode;
}

struct Node* insertAtbeginning(int a)
{
	struct Node* nnode=createNode(a);
	nnode->next=head;
	head=nnode;
	printf("inserted %d\n",nnode->value);
	return nnode;
}

void displayList()
{
	struct Node* temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->value);
		temp=temp->next;
	}
	printf("NUll\n");
}

void main()
{
	insertAtbeginning(10);
	insertAtbeginning(20);		
	insertAtbeginning(30);		
	insertAtbeginning(40);		
	displayList();
}
		
	
			
