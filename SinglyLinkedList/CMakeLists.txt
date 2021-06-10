cmake_minimum_required (VERSION 3.8)

project(SinglyLinkedList VERSION 1.0)
add_library (SinglyLinkedList SHARED "singlylinkedlist.c")

install(TARGETS SinglyLinkedList ARCHIVE DESTINATION lib)
install(TARGETS SinglyLinkedList RUNTIME DESTINATION bin)