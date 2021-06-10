#include "common.h"

typedef struct DoublyLinkedList_Node {
	uint32_t data;
	struct DoublyLinkedList_Node* next;
	struct DoublyLinkedList_Node* prev;
}DoublyLinkedList_Node;

typedef struct DoublyLinkedList {
	DoublyLinkedList_Node* Head;
}DoublyLinkedList;

DSAAPI DoublyLinkedList DoublyLinkedList_Create( uint32_t data);
DSAAPI void DoublyLinkedList_Push(DoublyLinkedList* list, uint32_t data);
DSAAPI uint32_t DoublyLinkedList_Pop(DoublyLinkedList* list);
DSAAPI void DoublyLinkedList_Destroy(DoublyLinkedList* list, uint32_t data);
DSAAPI uint32_t DoublyLinkedList_Retrieve(DoublyLinkedList* list, int index);