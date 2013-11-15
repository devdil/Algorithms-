
/*
 @author : diljit ramachandran
 program : heap_sort
 date    : 15th Friday 2013
 free to copy,share and redistribute
 

*/

#include<stdio.h>
void max_heapify(int);
void build_max_heap();
void heap_sort();
int array[10];
int size=10;
int main()
	{
	
		int i;	
		printf(" Enter elements of the array\n ");
		for(i = 0; i < 10 ; i++)
			{
			
			scanf("%d",&array[i]);
			}
			
			
			heap_sort();
			
	
		for (i = 0; i < 10 ; i++ )
		printf(" %d ",array[i]);
	
	
	
	}

void heap_sort()
	{
	
	build_max_heap();
	int j,temp;
	
	for( j=size;j>=2;j--)
	{
		temp=array[0];
		array[0]=array[j-1];
		array[j-1]=temp;
		size--;
		max_heapify(1);
		
	
	}
	
	
	
	
	}
	
	
void build_max_heap()
	{

	int j;
		for ( j= size/2 ; j>=1; j--) // since leaves are by definition max heaps... the loop iterates from size/2 to root 
			{
	 			max_heapify(j); // call max heapify procedure
	
			}


	}
	
void max_heapify(int index)
	{
	
	int left_child_index,right_child_index,largest,temp;
	
	left_child_index = ((2*index)-1); // -1 since array index starts from zero and here 1 is assumed to be starting index
	
	right_child_index = (((2*index)+1)-1);
	
	
	if ( left_child_index<=size-1 && ( array[left_child_index] > array[index-1] ) )
		largest = left_child_index;
		
	else
		largest = index -1 ;
	
	if ( right_child_index<=size-1 && ( array[right_child_index] > array[largest] ) )
		 
		largest = right_child_index ;
	
		
	if ( largest != index-1 )
		{
			temp = array[index-1];
			array[index-1] = array[largest];
			array[largest] = temp;
			
			max_heapify(largest+1);
		}
	}
			
	
	
	
	
	
	
			
			
