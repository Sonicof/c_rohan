#include<stdio.h>
#include<string.h>
void main()
{
    int n;
    printf("Enter number of Students : \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int usn,marks[3][5];
        char name[50];
        printf("Enter USN : \n");
        scanf("%d",&usn);
        printf("Enter the name of student : ");
        scanf("%s",name);
        printf("Enter marks in IA-1 : \n");
        for(int i=0;i<5;i++)
        {
            printf("Enter Subject %d marks : ",(i+1));
            scanf("%d",&marks[0][i]);
        }
        printf("Enter marks in IA-2 : \n");
        for(int i=0;i<5;i++)
        {
            printf("Enter Subject %d marks : ",(i+1));
            scanf("%d",&marks[1][i]);
        }
        printf("Enter marks in Assignments : \n");
        for(int i=0;i<5;i++)
        {
            printf("Enter Subject %d marks : ",(i+1));
            scanf("%d",&marks[2][i]);
        }
        printf("USN : \e[4m%d\e[0m\t\t",usn);
        printf("Name: \e[4m%s\e[0m\n\n",name);
        printf("Internal Marks : \n");
        printf("Name        Marks       Remarks\n");
        int sum[5];
        for(int i=0;i<1;i++)
        {
            for(int j=0;j<5;j++)
            {
                sum[j]=marks[i][j]+marks[i+1][j];
            }    
        }
        char remark[5];
        for(int i=0;i<5;i++)
        {
            if(sum[i]<16)
            {
                remark[i]='F';
            }
            else
            {
                remark[i]='P';
            }
        }
        for(int i=0;i<5;i++)
        {
            printf(" S%d\t    %d\t\t %c\n\n",(i+1),sum[i],remark[i]);
        }
    }
}   
/*Name        Marks       Remarks 
 s1          40           F   */        
