#include<stdio.h>
int main()
{
    int m,n,count=0,i,j;
    printf("enter the number of rows:\n");
    scanf("%d",&m);
    printf("enter the number of cols:\n");
    scanf("%d",&n);
    int a[m][n];
    printf("the matrix values is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix elements are:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("if matrix is spare or  not??\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
            count=count+1;
        }
    }
    if (count>((m*n)/2))
    {
        printf("the matrix is sparse");
    }
      else
      {
        printf("the matrix is not sparse");
      }

    return 0;
}
