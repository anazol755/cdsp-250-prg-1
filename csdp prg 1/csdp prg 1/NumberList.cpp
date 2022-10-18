//  NumberList.cpp
//  csdp 250 prg 1
//  Amir Gawish

#include "NumberList.hpp"
#include <iostream>
using namespace std;

NumberList::NumberList()
{
    head =nullptr;
}

void NumberList::appendNode(int ids, double gp)
{
    ListNode *newNode;
    ListNode *nodePtr;
    newNode = new ListNode;
    newNode->id=ids;
    newNode->gpa=gp;
    
    if(!head)
        head = newNode; // First node
    else // Not first node
    {
        nodePtr = head; //
        while (nodePtr->next) // Not at last
        {
            nodePtr = head; // Go to this node
            while (nodePtr->next) // Not at last
                nodePtr = nodePtr->next; // Make the ptr point to the next item
            nodePtr->next = newNode; // next item is the newNode
        }
    }
}


void NumberList::insertNode(int ids, double gp)
{
    ListNode *newNode;
    ListNode *prevNode = nullptr;
    ListNode *nodePtr = nullptr;
    newNode = new ListNode;
    newNode->id=ids;
    newNode->gpa=gp;
    
    if(!head) {head = newNode;}
    else {
        while(nodePtr->next)
        { // Is there another item
            nodePtr = head;
            prevNode = head; // save current head
            
            while(nodePtr->next) { // Move to next head
                if(ids >= head->id) {
                    prevNode->next = newNode;
                }
                newNode->next = nodePtr;
            }
            
            
        }
    }

}

void NumberList::deleteNode(int ids)
{
    ListNode *nodePtr;
    ListNode *previousNode =nullptr;
    
    if(!head)
        return;
    if(head->id==ids)
    {
        nodePtr=head->next;
        delete head;
        head = nodePtr;
    }
    else
    {
        nodePtr = head;
        while (nodePtr != nullptr && nodePtr->id != ids)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }
        if(nodePtr)
        {
            previousNode->next = nodePtr->next;
            nodePtr = nodePtr->next;
        }
    }
}

void NumberList::displayList()const
{
    ListNode *nodePtr;
    
    nodePtr = head;
    while (nodePtr)
    {
        cout << nodePtr->id <<" "<<nodePtr->gpa<<"\n";
        nodePtr = nodePtr->next;
    }
}
