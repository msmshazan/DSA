#include <doublylinkedlist.h>

#define Node DoublyLinkedList_Node

DSAAPI DoublyLinkedList DoublyLinkedList_Create(uint32_t data) {
	DoublyLinkedList Result = { .Head = (Node*)calloc(sizeof(Node),1) };
	Result.Head->data = data;
	Result.Head->next = NULL;
	Result.Head->prev = NULL;
	return Result;
}


DSAAPI void DoublyLinkedList_Push(DoublyLinkedList* list, uint32_t data) {
	Node* current = list->Head;
	if (current == NULL) return;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = (Node*)calloc(sizeof(Node), 1);
	if (current->next != NULL) {
		current->next->data = data;
		current->next->prev = current;
		current->next->next = NULL;
	}
}

DSAAPI uint32_t DoublyLinkedList_Pop(DoublyLinkedList* list) {
	Node* current = list->Head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	uint32_t data = current->data;
	current->prev->next = NULL;
	free(current);
	return data;
}

DSAAPI void DoublyLinkedList_Destroy(DoublyLinkedList* list, uint32_t data) {
	Node* current = list->Head;
	if (current != NULL) {
		Node* prev = NULL;
		while (current->next != NULL)
		{
			prev = current;
			current = current->next;
			free(prev);
			prev = NULL;
		}
		free(current);
		current = NULL;
	}
	list->Head = NULL;
}

DSAAPI uint32_t DoublyLinkedList_Retrieve(DoublyLinkedList* list, int index) {
	Node* current = list->Head;
	for (size_t i = 0; i < index; i++)
	{
		if (current->next != NULL)
		{
			current = current->next;
		}
		else break;
	}
	return current->data;
}

DSAAPI int DoublyLinkedList_Count(DoublyLinkedList* list) {
	int result = 0;
	if (list->Head != NULL) {
		Node* current = list->Head;
		result++;
		while (current->next != NULL)
		{
			result++;
			current = current->next;
		}
	}
	return result;
}