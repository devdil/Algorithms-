
/* author :diljit ramachandran 
   date: 23 november 2013
   language: c
   licence:gpl
   free to share,edit,copy and redistribute 



Note :Test the program with a graph(unweighted/directed or undirected represented by its adjancency matrix) 

Sample Graph can be used from this link : http://www.codeproject.com/KB/java/BFSDFS/graph.PNG  

Functions and Variables Used :


void depth_first_search() : takes source as parameter /on the vertex u want to perform dfs
graph[][] :the adjancey matrix
visited[] : auxillary matix to keep track of the visited nodes in the traversal
size : the number of vertices
source : the source/initial vertex

 */




#include<stdio.h>
#define size 6
#define true 1
#define false 0

void depth_first_search (int);
int visited[size];
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
			for( j = 0 ; j < size; j++)			
		   		{
		   			   
				if (graph[source][j] == 1 && visited[j] == false) // if the adjacent node is connected and not visited... then call dfs on that adjacent vertex recursively pretty simple :)
					 {
				
					 	printf(" --> %d",j);
							 		 
						depth_first_search(j); // calling dfs recursively on the unvisited node
			 
			         	 }
		   		}
		   
		  
		}
		   
		   		   	
		
		
		
			
			
		
		
		
