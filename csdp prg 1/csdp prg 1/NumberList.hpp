//  NumberList.hpp
//  csdp 250 prg 1

#ifndef NumberList_hpp
#define NumberList_hpp

#include <stdio.h>

class NumberList
{
    private:
        struct ListNode
    {
            int id;
            double gpa;
            struct ListNode*next;
        };
    ListNode *head;
    
    public:
    NumberList();
    void appendNode(int, double);
    void insertNode(int, double);
    void deleteNode(int);
    void displayList() const;
};

#endif /* NumberList_h */
