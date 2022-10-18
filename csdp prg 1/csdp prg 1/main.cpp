//  main.cpp
//  csdp 250 prg 1
//  Amir Gawish

#include <iostream>
#include "NumberList.hpp"
using namespace std;

/*
 
 // Part I:
 Use C++ to write a program implement a linked list called StudentList.
 
 // Part II:
 The node of the list is called ListNode, which contains two values:
    id (student ID, integer) and gpa (double).
 
 // Part III:
 The list will be able to perform the following functions:
    add a student ( i.e., append a node),
    insert a student with the order of id number
    (i.e., insert a node right before the 1st node whose id is bigger than the new node’s id),
 
    delete a node (by the id), and display the list.
 
 */

int main()
{
    NumberList list;
    
    list.appendNode(135, 3.0);
    list.appendNode(127, 2.5);
    list.appendNode(534, 4.0);
    list.insertNode(578, 3.6);
    
    cout <<"\n delete nodes";
    list.deleteNode(534);
    list.deleteNode(135);
    
    cout<<"\n display\n";
    list.displayList();
    
    return 0;
}
