#include <singlylinkedlist.h>

#define Node SinglyLinkedList_Node

DSAAPI SinglyLinkedList SinglyLinkedList_Create(uint32_t data) {

	SinglyLinkedList Result = { .Head = (Node*)calloc(sizeof(Node),1) };
	Result.Head->data = data;
	return Result;
}

DSAAPI void SinglyLinkedList_Push(SinglyLinkedList* list, uint32_t data) {
	Node* current = list->Head;
	if (current != NULL) {
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = (Node*)calloc(sizeof(Node), 1);
		if (current->next != NULL) {
			current->next->data = data;
		}
	}
}

DSAAPI uint32_t SinglyLinkedList_Pop(SinglyLinkedList* list) {
	Node* current = list->Head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	uint32_t data = current->data;
	free(current);
	return data;
}

DSAAPI void SinglyLinkedList_Destroy(SinglyLinkedList* list, uint32_t data) {
	Node* current = list->Head;
	Node* prev = NULL;
	if (current != NULL) {
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

DSAAPI uint32_t SinglyLinkedList_Retrieve(SinglyLinkedList* list, int index) {
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

DSAAPI int SinglyLinkedList_Count(SinglyLinkedList* list) {
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