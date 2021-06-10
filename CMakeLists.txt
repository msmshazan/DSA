cmake_minimum_required (VERSION 3.8)

project ("DataStructuresAndAlgorithms" VERSION 1.0)

set(CMAKE_VS_INCLUDE_INSTALL_TO_DEFAULT_BUILD 1)
include_directories( "include" )
add_subdirectory (SinglyLinkedList)
add_subdirectory (DoublyLinkedList)
add_subdirectory (Examples)
