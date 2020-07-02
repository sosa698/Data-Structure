#ifndef __BINARY_HEAP_ARRAY_H__
#define __BINARY_HEAP_ARRAY_H__

#define BINARY_HEAP_COUNT	100

typedef struct BinHeapArray_t
{
	int data[BINARY_HEAP_COUNT];
	int index ;
}BinHeapArray_t;


void BHA_Initial(BinHeapArray_t* binary_heap);
void BHA_insert_data(BinHeapArray_t* binary_heap , int insert_data);
int BHA_pop_data(BinHeapArray_t* binary_heap , int data);


#endif
