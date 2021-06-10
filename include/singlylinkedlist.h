#include "common.h"


typedef struct SinglyLinkedList_Node {
	uint32_t data;
	struct SinglyLinkedList_Node* next;
}SinglyLinkedList_Node;


typedef struct SinglyLinkedList {
	SinglyLinkedList_Node* Head;
}SinglyLinkedList;


DSAAPI SinglyLinkedList SinglyLinkedList_Create( uint32_t data);
DSAAPI void SinglyLinkedList_Push(SinglyLinkedList* list, uint32_t data);
DSAAPI uint32_t SinglyLinkedList_Pop(SinglyLinkedList* list);
DSAAPI void SinglyLinkedList_Destroy(SinglyLinkedList* list, uint32_t data);
DSAAPI uint32_t SinglyLinkedList_Retrieve(SinglyLinkedList* list, int index);
DSAAPI int SinglyLinkedList_Count(SinglyLinkedList* list);