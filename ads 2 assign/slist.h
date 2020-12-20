#include <stdint.h>
#ifndef SLIST_H_INCLUDED
#define SLIST_H_INCLUDED

// Structure of Node
typedef struct _node_ Node;
struct _node_{
	int32_t data;
	Node *next;
};

//Structure for head and tail
typedef struct _slist_ Slist;
struct _slist_{
	Node *head;                                // indicates starting node of the list
	Node *tail;                               // indicates last node of the list
	uint32_t length;                         // it return how many nodes are there in the list
};

Slist slist_new();                        // intializes single linked list
//uint returns 0 or 1
uint8_t slist_lookup(const Slist *list,int32_t key); // search perticular element is present or not,list passed as const because we just want to read through list no other operation is allowed so we pass const list which will not allow to change the content of the list, and key thatwe want to search
uint32_t slist_length(const Slist *list);// returns the length of linked list
Slist*  slist_addnode_head(Slist *list,int32_t val);// add new element at the start of the list
Slist* slist_addnode_tail(Slist *list,int32_t val);// add element to end of the list
int32_t slist_min(Slist *list);// to find minimum element
int32_t slist_max(Slist *list);//to find maximum element
Slist* slist_reverse(Slist *list);//to reverse a list
Slist* slist_deletenode_head(Slist *list); // delete node from top to list
Slist* slist_deletenode_tail(Slist *list);// delete node from end of list
Slist* slist_deletenode_any(Slist *list,int32_t val);// delete node of given value
int32_t slist_same(Slist *list1,Slist *list2);//compare 2 list are same or not
Slist* slist_union(Slist *list1,Slist *list2);//union of 2 list
Slist* slist_inter(Slist *list1,Slist *list2);//intersection of 2 list
#endif