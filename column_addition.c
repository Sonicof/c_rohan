//Program to calculate the sum of coloumns
#include<stdio.h>
void main()
{
    int m,n;
    int sum=0;
    printf("Enter the number of rows and columns : ");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    printf("Enter the values of the matrix : ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {  
        sum=0;
        for(int j=0;j<m;j++)
        {
            sum+=arr[j][i];
        }
        printf("Sum of coloumn %d is : %d \n",(i+1),sum);
    }
    
}
