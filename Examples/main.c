#include <singlylinkedlist.h>
#include <doublylinkedlist.h>

int main()
{
	SinglyLinkedList sList = SinglyLinkedList_Create(2);
	SinglyLinkedList_Push(&sList, 24);
	SinglyLinkedList_Push(&sList, 34);
	SinglyLinkedList_Push(&sList, 54);
	SinglyLinkedList_Push(&sList, 84);
	SinglyLinkedList_Push(&sList, 94);
	SinglyLinkedList_Node* sNode = sList.Head;
	printf("SinglyLinkedList Count: %u \n", SinglyLinkedList_Count(&sList));
	int index = 0;
	while (sNode->next != NULL){
		printf("SinglyLinkedList Element [%i]: %u \n",index, sNode->data);
		sNode = sNode->next;
		index++;
	} 
	printf("SinglyLinkedList Element [%i]: %u \n", index, sNode->data);
	DoublyLinkedList dList = DoublyLinkedList_Create(2);
	DoublyLinkedList_Push(&dList, 24);
	DoublyLinkedList_Push(&dList, 34);
	DoublyLinkedList_Push(&dList, 54);
	DoublyLinkedList_Push(&dList, 84);
	DoublyLinkedList_Push(&dList, 94);
	DoublyLinkedList_Node* dNode = dList.Head;
	printf("DoublyLinkedList Count: %u \n", DoublyLinkedList_Count(&dList));
	index = 0;
	while (dNode->next != NULL) {
		printf("DoublyLinkedList Element [%i]: %u \n", index, dNode->data);
		dNode = dNode->next;
		index++;
	}
	printf("DoublyLinkedList Element [%i]: %u \n", index, dNode->data);
	return 0;
}