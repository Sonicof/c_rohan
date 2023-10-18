#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
bool sudoku(int arr[9][9]) 
{ 
    for(int i=0;i<9;i++)
    {
        int unique[10];
        int k=0;
        for(int j=0;j<9;j++)
        {
            if(binarySearch(unique,arr[i][j],k))
            {
                return false;
            }
            else
            {
                unique[k]=arr[i][j];
                k=k+1;
            }
        }
    }
    for(int i=0;i<9;i++)
    {
        int unique[10];
        int k=0;
        for(int j=0;j<9;j++)
        {
            if(binarySearch(unique,arr[j][i],k))
            {
                return false;
            }
            else
            {
                unique[k]=arr[j][i];
                k=k+1;
            }
        }
    }
    for(int i=3;i<10;i=i+3)
    {
        for(int j=3;j<10;j=j+3)
        {
            int unique[10];
            int k=0;
            for(int i1=i-3;i1<i;i1++)
            {
                for(int j1=j-3;j1<j;j1++)
                {
                    if(binarySearch(unique,arr[i1][j1],k))
                    {
                        return false;
                    }
                    else
                    {
                        unique[k]=arr[i1][j1];
                        k=k+1;
                    }
                }
            }
        }
    }
    return true;
}
int binarySearch(int arr[10],int a,int n)
{
	for(int i=0;i<n;i++)
	{
	    if(arr[i]==a)
	    {
	        return true;
	    }
	}
	return false;
}
void main()
{
    int s[9][9]={{5,3,4,6,7,8,9,1,2},
                  {6,7,2,1,9,5,3,4,8},
                  {1,9,8,3,4,2,5,6,7},
                  {8,5,9,7,6,1,4,2,3},
                  {4,2,6,8,5,3,7,9,1},
                  {7,1,3,9,2,4,8,5,6},
                  {9,6,1,5,3,7,2,8,4},
                  {2,8,7,4,1,9,6,3,5},
                  {3,4,5,2,8,6,1,7,9}};
    if(sudoku(s))
    {
        printf("Accepted\n");
    }
    else
    {
        printf("Rejected\n");
    }
}
