#ifndef __QUEUE_H__
#define __QUEUE_H__


typedef struct queue_t
{
	int data;
	struct queue_t* next;
}queue_t;


queue_t* create_queue(void);
void pop_queue(queue_t** root);
void push_queue(queue_t** root , int push_data);
int IsEmpty_queue(queue_t** root);
int get_queue_size(queue_t** root);
int get_queue_front(queue_t** root);

#endif
