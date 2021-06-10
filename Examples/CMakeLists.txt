cmake_minimum_required (VERSION 3.8)

project("Examples")
add_executable ( Examples "main.c")
target_link_libraries ( Examples DoublyLinkedList SinglyLinkedList )
install(TARGETS Examples RUNTIME DESTINATION bin)
