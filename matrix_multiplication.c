#include<stdio.h>
int main()

{
    int sum=0;
    int a[2][3],b[3][3],result[2][3];
    printf("enter first matrix: \n");
    for(int i=0;i<2;i++)
        {
            for(int j=0;j<3;j++)
                {
                    scanf("%d",&a[i][j]);
                }
          
      
        }
    printf("enter second matrix:\n");
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                {
                    scanf("%d",&b[i][j]);
                }
            
        }
    printf("the matrix a is:\n");
    for(int i=0;i<2;i++)
        {
            for(int j=0;j<3;j++)
                {
                    printf("%d ",a[i][j]);
                }
                    printf("\n");
        }
      printf("the matrix b is:\n");
      for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                {
                    printf("%d ",b[i][j]);
                }
                    printf("\n");
        }
        printf("the matrix multiplication is:");
        for( int i=0;i<2;i++)
            {
                for(int j=0;j<3;j++)
                    {
                        sum=0;
                        for( int k=0;k<3;k++)
                            {
                                sum+=a[i][k]*b[k][j];
                            }
                        result[i][j]=sum;    
                    }
                
            }    
         printf("the matrix multiplication is:\n");
        for(int i=0;i<2;i++)
            {
                for(int j=0;j<3;j++)
                    {
                        printf("%d ",result[i][j]);
                    }
                        printf("\n");
            }
        return 0;
      //printf("the matrix multiplication is :");
}
       
        
        
        
        
        
        
        
        
        
        
        
        
    
