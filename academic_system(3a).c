#include<stdio.h>
struct system
	{
		char std_id[10];
		char name[50];
		char grade;
		int marks[5];
	};

void display(struct system s1[5])
{
	printf("\n\nDetails of all the 5 students --->");
	for(int i=0;i<5;i++)
	{
		printf("\n\tStudent %d -->",(i+1));
		printf("\n\t\tID : %s",s1[i].std_id);
		printf("\n\t\tName : %s",s1[i].name);
		printf("\n\t\tGrade : %c",s1[i].grade);
	}
}		
void main()
{
	struct system sys[5];
	for(int i=0;i<5;i++)
	{
		printf("Enter Details of Student %d --->",(i+1));
		printf("\n\tEnter Student ID : ");
		scanf("%s",sys[i].std_id);
		printf("\n\tEnter Name : ");
		scanf("%s",sys[i].name);
		printf("\n\tEnter Marks for 5 subjects scored out of 100 --->");
		for(int j=0;j<5;j++)
		{
			printf("\n\t\tEnter marks in this subject : ");
			scanf("%d",&sys[i].marks[j]);
		}
	}
	for(int i=0;i<5;i++)
	{
		int total=0;
		for(int j=0;j<5;j++)
		{
			total=total+sys[i].marks[j];
		}
		float avg=total/5;
		if(avg>=90)
		{
			sys[i].grade='A';
		}
		if(avg>=80 && avg<90)
		{
			sys[i].grade='B';
		}
		if(avg>=70 && avg<80)
		{
			sys[i].grade='C';
		}
		if(avg>=60 && avg<70)
		{
			sys[i].grade='D';
		}
		if(avg<60)
		{
			sys[i].grade='F';
		}
	}
	display(sys);	
	printf("\n");	
}
		 
