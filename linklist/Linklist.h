#ifndef __LINKLIST_H__
#define __LINKLIST_H__


typedef struct Linklist_t
{
	int data;
	struct Linklist_t* next;
}Linklist_t;


Linklist_t* CreateLink(void);
void InsertToEnd(Linklist_t** Link , int insert_data);
void InsertToHead(Linklist_t** Link , int insert_data);
void DeleteData(Linklist_t** Link , int delete_data);
int FindData(Linklist_t* Link,int find_data);


#endif
