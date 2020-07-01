#include "stack.h"
#include <stdlib.h>


stack_t* create_stack(void)
{
	return NULL;
}

void pop(stack_t** root)
{
	stack_t* tmp = *root;
	*root = (*root)->next;
	
	free(tmp);
}

void push(stack_t** root , int push_data)
{
	stack_t* cur = (stack_t*)malloc(sizeof(stack_t));	//grow to up and point to down
	cur->data = push_data;
	cur->next = *root;
	
	*root = cur;
}


int IsEmpty(stack_t** root)
{
	return *root == NULL ? 1 : 0 ;
}
