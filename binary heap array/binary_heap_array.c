/*

Max heap

*/

#include <stdlib.h>
#include "binary_heap_array.h"

#define SWAP(x, y) int tmp = x; x = y; y = tmp;

void BHA_Heapify(BinHeapArray_t* binary_heap , int root_index , int array_length);
void BHA_modify(BinHeapArray_t* binary_heap);


void BHA_Initial(BinHeapArray_t* binary_heap)
{
	binary_heap->index = -1;
}

void BHA_insert_data(BinHeapArray_t* binary_heap , int insert_data)
{
	++binary_heap->index;
	binary_heap->data[binary_heap->index] = insert_data;

	BHA_modify(binary_heap);
	
}


int BHA_pop_data(BinHeapArray_t* binary_heap , int data)
{
	int top = binary_heap->data[0];
	
	SWAP( binary_heap->data[0] , binary_heap->data[binary_heap->index] );
	binary_heap->index--;
	 
	BHA_modify(binary_heap);
	return top;
}

//----------------------private----------------------------------//

/*
brief: to heapify any root

if after swag , need to check if "be swaged node"has child , need to heapify
*/
void BHA_Heapify(BinHeapArray_t* binary_heap , int root_index , int array_length)
{
	int left_index  = 2*root_index + 1;
	int right_index = 2*root_index + 2;
	int largest_index = root_index;
	
	if(left_index > array_length) return ; //no child 
	
	//----find max----//
	if(binary_heap->data[left_index] > binary_heap->data[root_index])	//compare with left first
	{
		largest_index = left_index;
	}
	
	if(right_index <= array_length && binary_heap->data[largest_index] < binary_heap->data[right_index])	//compare with right if right is exist
	{
		largest_index = right_index;
	}

	
	//-----do swap and heapify
	if(largest_index != root_index)
	{
		SWAP(binary_heap->data[root_index] , binary_heap->data[largest_index]);
		BHA_Heapify(binary_heap ,largest_index , array_length );
	}
	
}





/*
brief : To heapify all the node
*/
void BHA_modify(BinHeapArray_t* binary_heap)
{
	for(int i = (binary_heap->index+1)/2 ; i>=0 ; i--)
	{
		BHA_Heapify(binary_heap ,i ,binary_heap->index );
	}
}




