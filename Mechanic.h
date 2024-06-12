

#ifndef MECHANIC_H
#define MECHANIC_H

#include "Entity.h"
#include <string>
using namespace std;

class Mechanic : public Entity{
    public:
        Mechanic(const string name);
        ~Mechanic();
        void print() const;
        static void resetId();
        void addRepair(Repair* repair);
    private:
        static const char code;
        static int nextId;
};
#endif