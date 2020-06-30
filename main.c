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

//	InsertToEnd(p , 1);	
//	InsertToEnd(p , 2);
//	InsertToEnd(p , 3);
//	InsertToEnd(p , 4);
//	InsertToHead1(&p , 100);
//	p = InsertToHead(p ,100);
	
//	p = DeleteData(p , 10);

//	int a = FindData(p,100);
//	InsertToEnd(p , 1);	
//	printf("find = %d" ,a);
	
	//-----printf test
		
	return 0;
}
