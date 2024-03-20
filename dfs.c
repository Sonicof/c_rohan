#include<stdio.h>
#include<stdbool.h>

#define MAX_VERTICES 100

void initializegraph(int vertices, int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES])
{
	for (int i=0;i<vertices;i++)
	{
		for (int j=0;j<vertices;j++)
		{
		  adjacencyMatrix[i][j]=0;
		}
	}
 }

void addEdge(int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES], int start, int end)
{
  adjacencyMatrix[start][end]=1;
  adjacencyMatrix[end][start]=1;
}

void DFS(int vertices, int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES],int vertex, bool visited[])
{
	visited[vertex]=true;
	for (int i=0;i=vertices;i++)
	{
		if (adjacencyMatrix[vertex][i]&&!visited[i])
		{
			DFS(vertices,adjacencyMatrix,i,visited);
		}
	}
}
bool isconnected(int vertices, int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES])
{
	bool visited[MAX_VERTICES]={false};

	DFS(vertices, adjacencyMatrix, 0, visited);

	for (int i=0;i<vertices;i++)
	{
		if(!visited[i])
		{
			return false;
		}
	}
	return true;
}
  
int main()
{
    int vertices, edges, start, end;
    int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];
    
    printf("Enter the number of vertices in the graph:");
    scanf("%d",&vertices);
    
    initializegraph(vertices, adjacencyMatrix);
    
    printf("Enter the number of edges in the graph:");
    scanf("%d",&edges);
    
    printf("Enter the edges (start end):\n");
    printf("Use starting vertex ID as 0\n");
    for (int i=0;i<edges;i++){
       scanf("%d %d",&start,&end);
       addEdge(adjacencyMatrix,start,end);
     }
     
     if(isconnected(vertices, adjacencyMatrix)){
       printf("The graph is connected:\n");
     }
     else{
       printf("The graph is not connected:\n");
     }
     return 0;
 }
