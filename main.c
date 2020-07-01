#include <stdio.h>
#include <stdlib.h>
#include "./linklist/Linklist.h"
#include "./stack/stack.h"
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
	stack_t* s = create_stack();
	
	
	
	for(unsigned long long i = 0XFFFFFFFF ; i<=0; i --)
	{
		push(&s,10);
		push(&s,20);
		push(&s,30);
		push(&s,40);
		push(&s,50);
		
		pop(&s);
		pop(&s);
		pop(&s);
		pop(&s);
		pop(&s);
	}
	
	push(&s,50);
	
	int a = IsEmpty(&s);

	PRINT_STACK();
//----------------------------------stack test End

		
	return 0;
}
