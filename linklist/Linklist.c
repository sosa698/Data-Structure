#include "Linklist.h"
#include <stdlib.h>

Linklist_t* CreateLink(void)
{
	return NULL;
}
  
 
void InsertToEnd(Linklist_t** Link , int insert_data)
{
	if( (*Link) == NULL )
	{
		(*Link) = (Linklist_t*)malloc(sizeof(Linklist_t));
		(*Link) -> data = insert_data;
		(*Link)-> next = NULL;
	}
	else
	{
		Linklist_t* cur = *Link;		
		while( cur->next != NULL)	//Find End
		{
			cur = cur->next; 
		}
		cur->next = (Linklist_t*)malloc(sizeof(Linklist_t));
		cur->next->data = insert_data;
		cur->next->next = NULL;
	}
}

void InsertToHead(Linklist_t** Link , int insert_data)
{
	Linklist_t* new_head =  (Linklist_t*)malloc(sizeof(Linklist_t));
	new_head->data = insert_data;
	new_head->next = *Link;
		
	*Link = new_head;	
}



void DeleteData(Linklist_t** Link , int delete_data)
{

	if( (*Link)->data == delete_data)	//first node
	{
		Linklist_t* tmp =  *Link;
		*Link = (*Link) -> next;
		free(tmp);
		return;
	}
	else//----not first node-----//
	{	
		Linklist_t* last = *Link;
		Linklist_t* cur =  *Link;
		
		while(cur != NULL)
		{
			if(cur->data == delete_data) break;
			last = cur;
			cur = cur->next;		
		}
	
		if(cur != NULL)
		{
			last->next = cur->next;
			free(cur);
		}
	}
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


