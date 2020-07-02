#include "stack.h"
#include <stdlib.h>


stack_t* create_stack(void)
{
	return NULL;
}

void pop_stack(stack_t** root)
{
	if( IsEmpty_stack(root) == 1 )	return;
	stack_t* tmp = *root;
	*root = (*root)->next;
	
	free(tmp);
}

void push_stack(stack_t** root , int push_data)
{
	stack_t* cur = (stack_t*)malloc(sizeof(stack_t));	//grow to up and point to down
	cur->data = push_data;
	cur->next = *root;
	
	*root = cur;
}


int IsEmpty_stack(stack_t** root)
{
	return *root == NULL ? 1 : 0 ;
}

int get_stack_size(stack_t** root)
{
	unsigned int count;
	stack_t* cur = *root;
	while(cur != NULL)
	{
		count++;
		cur=cur->next;
	}
	return count;
}

int get_stack_top(stack_t** root)
{
	return (*root)->data;
}
