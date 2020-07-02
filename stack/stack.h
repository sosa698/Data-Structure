#ifndef __STACK_H__
#define __STACK_H__


typedef struct stack_t
{
	int data;
	struct stack_t* next;
}stack_t;


stack_t* create_stack(void);
void pop_stack(stack_t** root);
void push_stack(stack_t** root , int push_data);
int IsEmpty_stack(stack_t** root);
int get_stack_top(stack_t** root);
int get_stack_size(stack_t** root);

#endif
