#include<stdio.h>
struct system
	{
		char std_id[10];
		char name[50];
		char grade;
		int marks[5];
	};

void display(struct system *s1)
{
	printf("\n\nDetails of all the 5 students --->");
	for(int i=0;i<5;i++)
	{
		printf("\n\tStudent %d -->",(i+1));
		printf("\n\t\tID : %s",(s1+i)->std_id);
		printf("\n\t\tName : %s",(s1+i)->name);
		printf("\n\t\tGrade : %c",(s1+i)->grade);
	}
}		
void main()
{
	struct system sys[5];
	struct system *ptr=sys;
	for(int i=0;i<5;i++)
	{
		printf("Enter Details of Student %d --->",(i+1));
		printf("\n\tEnter Student ID : ");
		scanf("%s",(ptr+i)->std_id);
		printf("\n\tEnter Name : ");
		scanf("%s",(ptr+i)->name);
		printf("\n\tEnter Marks for 5 subjects scored out of 100 --->");
		for(int j=0;j<5;j++)
		{
			printf("\n\t\tEnter marks in this subject : ");
			scanf("%d",&(ptr+i)->marks[j]);
		}
	}
	for(int i=0;i<5;i++)
	{
		int total=0;
		for(int j=0;j<5;j++)
		{
			total=total+(ptr+i)->marks[j];
		}
		float avg=total/5;
		if(avg>=90)
		{
			(ptr+i)->grade='A';
		}
		if(avg>=80 && avg<90)
		{
			(ptr+i)->grade='B';
		}
		if(avg>=70 && avg<80)
		{
			(ptr+i)->grade='C';
		}
		if(avg>=60 && avg<70)
		{
			(ptr+i)->grade='D';
		}
		if(avg<60)
		{
			(ptr+i)->grade='F';
		}
	}
	display(ptr);	
	printf("\n");	
}
		 
