#include "Linklist.h"
#include <stdlib.h>

Linklist_t* CreateLink(int data)
{
	Linklist_t* tmp = (Linklist_t*)malloc(sizeof(Linklist_t));
	tmp->data = data;
	tmp->next = NULL;
	
	return tmp;
}
  
 
void InsertToEnd(Linklist_t* Link , int insert_data)
{
	while(Link->next != NULL)	//Find End
	{
		Link = Link->next;	
	}
	Link->next = CreateLink(insert_data);
}

Linklist_t* InsertToHead(Linklist_t* Link , int insert_data)
{
	Linklist_t* new_head =  (Linklist_t*)malloc(sizeof(Linklist_t));
	new_head->data = insert_data;
	new_head->next = Link;

	return new_head;
}

/*
void InsertToHead1(Linklist_t** Link , int insert_data)
{
	Linklist_t* new_head =  (Linklist_t*)malloc(sizeof(Linklist_t));
	new_head->data = insert_data;
	new_head->next = *Link;	
	*Link = new_head;
}
*/

Linklist_t* DeleteData(Linklist_t* Link , int delete_data)
{
	Linklist_t* head = Link;
	
	if(Link->data == delete_data)	//first node
	{
		head = Link->next;
		free(Link);
		return head;
	}
	
	//----not first node-----//
	Linklist_t* last = Link;
	
	while(Link != NULL)
	{
		if(Link->data == delete_data)
			break;
		last = Link;
		Link = Link->next;		
	}
	
	if(Link != NULL)
	{
		last->next = Link->next;
		free(Link);
	}
	return head;
}

int FindData(Linklist_t* Link,int find_data)
{
	while(Link != NULL)
	{
		if(Link->data == find_data)
			return 1;
		Link = Link->next;
	}
	return 0;
	
}


