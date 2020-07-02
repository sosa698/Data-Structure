#include "queue.h"
#include <stdlib.h>


queue_t* create_queue(void)
{
	return NULL;
}

void pop_queue(queue_t** root)
{
	if( IsEmpty_queue(root) == 1 )	return;
	queue_t* tmp = *root;
	*root = (*root)->next;
	
	free(tmp);
}

void push_queue(queue_t** root , int push_data)
{
	if( (*root) == NULL )
	{
		(*root) = (queue_t*)malloc(sizeof(queue_t));
		(*root) -> data = push_data;
		(*root)-> next = NULL;
	}
	else
	{
		queue_t* cur = *root;		
		while( cur->next != NULL)	//Find End
		{
			cur = cur->next; 
		}
		cur->next = (queue_t*)malloc(sizeof(queue_t));
		cur->next->data = push_data;
		cur->next->next = NULL;
	}
}

int IsEmpty_queue(queue_t** root)
{
	return *root == NULL ? 1 : 0 ;
}

int get_queue_size(queue_t** root)
{
	unsigned int count;
	queue_t* cur = *root;
	while(cur != NULL)
	{
		count++;
		cur = cur->next;
	}
	return count;
}

int get_queue_front(queue_t** root)
{
	return (*root)->data;
}
