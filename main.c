#include <stdio.h>
#include <stdlib.h>
#include "./linklist/Linklist.h"
#include "./stack/stack.h"
#include "./queue/queue.h"
#include "./binary heap array/binary_heap_array.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define PRINT_LINK()		while(p != NULL)						\
							{										\
								printf("data = %d \n",p->data);		\
								p = p->next; 						\
							}
																	
#define PRINT_STACK()		while(s != NULL)						\
							{										\
								printf("data = %d \n",s->data);		\
								s = s->next; 						\
							}

#define PRINT_QUEUE()		while(q != NULL)						\
							{										\
								printf("data = %d \n",q->data);		\
								q = q->next; 						\
							}
							
int main(int argc, char *argv[]) {
	
//----------------------------------Link test
/*
	Linklist_t* p = CreateLink();
	
	InsertToHead(&p ,3);
	InsertToEnd(&p , 1);
	InsertToEnd(&p , 4);	
	InsertToEnd(&p , 5);
	InsertToEnd(&p , 6);
	InsertToEnd(&p , 7);
	InsertToEnd(&p , 8);
	InsertToHead(&p ,10);

	DeleteData(&p , 4);
	
	int a  = FindData(p,101);
	
	printf("a = %d\n" , a);
	
	PRINT_LINK();

*/	

//----------------------------------Link test End

//----------------------------------stack test
/*
	stack_t* s = create_stack();
	int test = 0;
	for(unsigned long long i = 0XFF ; i>0; i --)
	{
		test = 1;
		push_stack(&s,10);
		push_stack(&s,20);
		push_stack(&s,30);
		push_stack(&s,40);
		push_stack(&s,50);
		
		pop_stack(&s);
		pop_stack(&s);
		pop_stack(&s);
		pop_stack(&s);
		pop_stack(&s);
	}
	
	if(test) printf("In \n");
	push_stack(&s,10);
	push_stack(&s,20);
	push_stack(&s,30);
	push_stack(&s,40);
	push_stack(&s,50);
	
	int a = get_stack_size(&s);
	
	printf("size = %d \n" , a);
	a = get_stack_size(&s);
	printf("size = %d \n" , a);
	
	PRINT_STACK();
*/
//----------------------------------stack test End

//----------------------------------queue test

/*	queue_t* q = create_queue();
	
	push_queue(&q, 10);
	push_queue(&q, 20);
	push_queue(&q, 30);
	push_queue(&q, 40);
	push_queue(&q, 50);
	pop_queue(&q);
	pop_queue(&q);	
	int a = get_queue_front(&q);
	
	printf("front = %d \n" , a);
	
	PRINT_QUEUE();
*/
//----------------------------------queue test End	


//----------------------------------Max Binary heap test

	BinHeapArray_t b ; 
	
	BHA_Initial(&b);
	
	BHA_insert_data(&b,38);
	BHA_insert_data(&b,14);	
	BHA_insert_data(&b,57);
	BHA_insert_data(&b,59);	
	BHA_insert_data(&b,52);	
	BHA_insert_data(&b,12);
	BHA_insert_data(&b,19);
	
	int a= 	BHA_pop_data(&b);printf("a = %d\n" , a);
	a= 	BHA_pop_data(&b);printf("a = %d\n" , a);
/*	
	b.data[0] = 38;
	b.data[1] = 14;
	b.data[2] = 57;
	b.data[3] = 59;
	
	b.index = 3;
	/*


	*/
//	BHA_modify(&b);
	
	for(int i = 0 ; i<=b.index ; i++)
	{
		printf("b[%d] = %d\n" , i , b.data[i]);
	} 

//----------------------------------Max Binary heap End

	
	return 0;
}
