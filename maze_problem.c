/* author :diljit ramachandran 
   date: 23 november 2013
   language: c
   licence:gpl
   free to share,edit,copy and redistribute 




 */



#include<stdio.h>
#define size 5
#define true 1
#define false 0

void depth_first_search(int,int);

char graph[size][size];

int visited[size][size];

int flag=0;

char c;
	
	int main()
		{
			
		int i,j,source,source2;
		
		
		for(i=0;i<size;i++)
		{

		    
			for(j=0;j<size;j++)
				{

					scanf("%c",&c);
					graph[i][j]=c;
					if(graph[i][j] == 'G'){
					source = i ;
					source2 = j;
					}
					getchar();
			visited[i][j] = false;
				}
	`	}
 
		
		
		depth_first_search(source,source2);  // calling depth_first_search on source i.e 'G"
		
		if(flag!=1)
		printf("Not Found Phil!");
		
		 
		 }
		 
		 
		 
		 
		 
	void depth_first_search(int i,int j)
		{
			
			visited[i][j] = true;
			
			if ( graph[i][j]=='P')
			{	flag=1;
				printf("Found Phil.\n");
			 	return;
			}
			
			if (j != size-1)
			{
				
				if(graph[i][j+1]!='#' && visited[i][j+1] == false)
				depth_first_search(i,j+1);
			
			}
			
			if (j !=0)
			{
				
				if(graph[i][j-1]!='#' && visited[i][j-1] == false)
				depth_first_search(i,j+1);
	
			}
			if (i != 0)
			{
				if(graph[i-1][j]!='#' && visited[i-1][j] == false)
				depth_first_search(i-1,j);
	
			}
			
			if (i != size-1) 
			{
				if(graph[i+1][j]!='#' && visited[i+1][j] == false)
				depth_first_search(i+1,j);
			}
			
			return;
		
		
		}
			
			
		
		
		
