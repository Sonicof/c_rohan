#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
void main() 
{ 
    char arr[9][9][5]= 
                       { 
                       {"5","3","4","6","7","8","9","1","2"}, 
                       {"6","7","2","1","9","5","3","4","8"}, 
                       {"1","9","8","3","4","2","5","6","7"}, 
                       {"8","5","9","7","6","1","4","2","3"}, 
                       {"4","2","6","8","5","3","7","9","1"}, 
                       {"7","1","3","9","2","4","8","5","6"}, 
                       {"9","6","1","5","3","7","2","8","4"}, 
                       {"2","8","7","4","1","9","6","3","5"}, 
                       {"3","4","5","2","8","6","1","7","9"} 
                       }; 
    char str1[12],str2[12];                  
    for(int i=0;i<9;i++)
    {
        strcpy(str1,"");
        for(int j=0;j<9;j++)
        {
            char *ptr=arr[i][j]; 
            char firstchar=*ptr; 
            ptr=strchr(str1,firstchar);
            if(ptr != NULL)
            {
                goto the_end;
                printf("1\n");
            }
            strcat(str1,arr[i][j]);
        }
    }
    printf("Rows Verified\n");
    for(int i=0;i<9;i++)
    {
        strcpy(str2,"");
        for(int j=0;j<9;j++)
        {
            char *ptr=arr[j][i]; 
            char firstchar=*ptr; 
            ptr=strchr(str2,firstchar);
            if(ptr != NULL)
            {
                goto the_end;
                printf("2\n");
            }
            strcat(str2,arr[j][i]);
        }
    }
    printf("Coloumns Verified\n");
    for(int i=3;i<10;i=i+3)
    {
        for(int j=3;j<10;j=j+3)
        {
            strcpy(str1,"");
            for(int i1=i-3;i1<i;i1++)
            {
                for(int j1=j-3;j1<j;j1++)
                {
                    char *ptr=arr[i1][j1]; 
                    char firstchar=*ptr; 
                    ptr=strchr(str1,firstchar);
                    if(ptr != NULL)
                    {
                        goto the_end;
                        printf("3\n");
                    }
                    strcat(str1,arr[i1][j1]);
                }
            }
        }
    }
    printf("Grids Verified\n");
    printf("Accepted\n");
    the_end:
        printf("Rejected\n");
}        
