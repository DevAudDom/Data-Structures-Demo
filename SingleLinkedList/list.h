//  file: list.cpp
// class: COP 3530 Data Structures
//    by: Dev Dom
//  desc: the header file for the list class
// --------------------------------------------------------

#ifndef LISTADT2_LIST_H
#define LISTADT2_LIST_H


class list {
private:

    struct Node{
        int data;
        /* next is a node pointer,
        a pointer is a variable that holds addresses of a specific data type
        the next pointer can only hold Node addresses*/
        Node* next;
    };

    /* Node* variable
     * This statement creates a pointer called variable of the node data type
     * Summarized, it creates a node pointer called variable
     * Think of it similarly to int or float
     * */

    struct Node* _head;
    struct Node* _current;
    struct Node* _temp;

public:
    // Constructor
    // --------------------------------------------------------

    list();

    void AddNode(int addData);
    void DeleteNode(int delData);
    void PrintList();



};


#endif //LISTADT2_LIST_H
