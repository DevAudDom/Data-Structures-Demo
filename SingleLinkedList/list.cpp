//  file: list.cpp
// class: COP 3530 Data Structures
//    by: Dev Dom
//  desc: the implementation file for the list class
// --------------------------------------------------------
#include <iostream>
#include "list.h"

list::list() {
    _head = nullptr;
    _current = nullptr;
    _temp = nullptr;
}
/**
 *Add a new node variable to the end of the list
 *If this is an empty list then assign the list's head pointer to the new node
 * @param addData - value passed by copy to new node's data property
 */
void list::AddNode(int addData) {

    Node* newNode = new Node;   // We create a node pointer called newNode, then we create a new node variable and set the pointer to its address
    newNode ->next = nullptr;   // sets next to nullptr
    newNode ->data = addData;   // sets data to addData parameter

    if (_head != nullptr)       // if head is pointing to an object then we have a list so "if there is a list"
    {
        _current = _head;       // make current point to the front of the list
        while (_current-> next != nullptr) // "advance to the end of the list"
        {
            _current = _current -> next;
        }
        _current -> next = newNode;

    }
    else                        // if we don't have a list to add newNode to, add new node to the front by pointing head to it
    {
        _head = newNode;
    }
}
/**
 * Remove a node variable from the list
 * @param delData - value used to identify target node
 */
void list::DeleteNode(int delData) {
    Node* delPtr = nullptr;
    _temp = _head;
    _current = _head;
    // _current->next allows us to access the element "next" of the Node _current is pointing at
    while (_current != nullptr && _current->data != delData)  // while we aren't on del data and aren't at the end of the list
                                                              // advance current and temp through the list
    {
    _temp = _current;
    _current = _current->next; // if we reach the end of the list _current will equal nullptr(when we add nodes, next is set null)
    }
    if (_current == nullptr){
        std::cout << delData << "was not in the list\n";
        delete delPtr;
    }
    else{
        delPtr = _current;
        _current = _current->next;
        _temp->next = _current;
        delete delPtr;
        std::cout << "\nThe value " << delData << " was deleted\n";
    }// Node pointer _temp is one node behind current
     // _current is set to to node after next
     // delPtr is set to target
     // temp is set to the val before the target, the next element of temps node is set equal to current
}
/**
 * Print the list data elements starting from the front (head)
 */
void list::PrintList() {
    _current = _head;
    while (_current != nullptr){
        std::cout << _current->data << " ";
        _current = _current->next;
    }
}
