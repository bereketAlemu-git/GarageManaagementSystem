#ifndef REPAIRLIST_H
#define REPAIRLIST_H

#include "Repair.h"
#include <iostream>
#include <string>
using namespace std;

class RepairList{
        class Node{
            public:
                Repair* data;
                Node* next;
        };
    private:
        Node* head;
        Node* tail;
    public:
        RepairList();
        ~RepairList();
        void add(Repair* repair);
        Repair* getNext();
        bool isEmpty();
        int size()const;
        void print() const;
};
#endif




