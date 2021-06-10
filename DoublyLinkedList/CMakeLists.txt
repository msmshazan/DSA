cmake_minimum_required (VERSION 3.8)

project(DoublyLinkedList VERSION 1.0)
add_library (DoublyLinkedList SHARED "doublylinkedlist.c")

install(TARGETS DoublyLinkedList ARCHIVE DESTINATION lib)
install(TARGETS DoublyLinkedList RUNTIME DESTINATION bin)