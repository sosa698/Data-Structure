#ifndef __STACK_H__
#define __STACK_H__


typedef struct stack_t
{
	int data;
	struct stack_t* next;
}stack_t;


stack_t* create_stack(void);
void pop(stack_t** root);
void push(stack_t** root , int push_data);
int IsEmpty(stack_t** root);

#endif
