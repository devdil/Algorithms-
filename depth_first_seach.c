#include<stdio.h>
#define size 6
#define true 1
#define false 0
void depth_first_search(int);
int visited[size];
int parent[size];
int graph[size][size];
	int main()
		{
		int i,j,source;
		printf("Enter the adjanceny matrix \n");
		for(i = 0 ; i < size ; i++)
		 {
		        printf("node %d \n",i+1);
		    
		    	for(j = 0 ; j < size ; j++)
				{
			
				scanf("%d",&graph[i][j]);
			
				}
			
		 }
		 
		for ( i = 0 ; i < size ; i++)
		visited[i] = false;               // pre intialization
		
		printf("Enter the source vertex to perform dfs traversal ");
		scanf("%d",&source);	 
		
		
		depth_first_search(source);  // calling depth_first_search on source 
		 
		printf("\n From vertex  %d   ",source+1);
		 
		 }
		 
	void depth_first_search(int source)
		{
		visited[source] = true; // initialize the source as visited i.e true
		int j;
			for( j = 0 ; j < size ; j++)			
		   		{
		   			   
				if (graph[source][j] == 1 && visited[j] == false) // if the adjacent node is connected and not visited... then call dfs on that adjacent vertex recursively pretty simple :)
					 {
				
					 	printf(" --> %d",j);
							 		 
						depth_first_search(j); // callinf dfs recursively on the unvisited node
			 
			         	 }
		   		}
		   
		  
		}
		   
