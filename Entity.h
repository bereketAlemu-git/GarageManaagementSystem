

#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
#include <string>
#include "RepairList.h"
#include "Repair.h"
using namespace std;

class Entity{
    public:
        Entity(char code, int num, const string name);
        ~Entity();
        bool hasRepairs();
        void addRepair(Repair* repair);
        Repair* getNextRepair();
        void print() const;
        void printRepairs() const;
        string getId() const;
    protected:
        const string name;
        const string id;
        RepairList repairs;
};
#endif
