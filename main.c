#include <stdio.h>
#include <stdlib.h>
#include "./linklist/Linklist.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define PRINT_LINK()		while(p != NULL)						\
							{										\
								printf("data = %d \n",p->data);		\
								p = p->next; 						\
							}										


int main(int argc, char *argv[]) {
	

	Linklist_t* p = CreateLink(10);
	InsertToEnd(p , 1);	
	InsertToEnd(p , 2);
	InsertToEnd(p , 3);
	InsertToEnd(p , 4);
//	InsertToHead1(&p , 100);
	p = InsertToHead(p ,100);
	
	p = DeleteData(p , 10);
//	int a = FindData(p,100);
	
//	printf("find = %d" ,a);
	
	//-----printf test
	PRINT_LINK();
	
	return 0;
}
