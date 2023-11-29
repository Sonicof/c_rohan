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

struct Node* insertAtend(int a)
{
    if(head==NULL)
		{
			insertAtbeginning(a);
		}	
		else
		{
			struct Node* nnode=createNode(a);
		  struct Node* temp=head;
		  while(temp->next!=NULL)
			{	
				temp=temp->next;
			}
			temp->next=nnode;
			nnode->next=NULL;
			printf("inserted at end %d\n",nnode->value);
		}
}

void displayList()
{
	struct Node* temp=head;
	if(head==NULL)
	{
		printf("List is empty!!");
	}	
	else
	{
		while(temp->next!=NULL)
		{
			printf("%d ",temp->value);
			temp=temp->next;
		}
		printf("NUll\n");
	}
}

void main()
{
	insertAtbeginning(10);
	insertAtbeginning(20);		
	insertAtbeginning(30);		
	insertAtbeginning(40);		
	displayList();
	insertAtend(5);
	insertAtend(4);
	insertAtend(3);
	displayList();
}
		
	
			
