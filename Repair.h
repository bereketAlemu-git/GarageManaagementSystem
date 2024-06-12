#ifndef REPAIR_H
#define REPAIR_H

#include <iostream>
#include <string>

using namespace std;

class Repair{
    
    public:
        Repair(int repairCode, double cost);
        bool isComplete();
        void completeRepair(const string& mechanicId);
        void print() const;
    private:
        int repairCode;
        double cost;
        string mechanicId;
        static const string NOTCOMPLETE;

    
};

#endif