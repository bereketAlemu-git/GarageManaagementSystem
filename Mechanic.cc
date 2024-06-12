
#include "Mechanic.h"
using namespace std;

const char Mechanic::code = 'M';
int Mechanic::nextId = 1;

//Constructor
Mechanic::Mechanic(const string name) : Entity(code, nextId++, name){
    //ctor
    // cout << "Mechanic" << endl; 

}

// Destructor
Mechanic::~Mechanic()
{
    // cout << "~Mechanic" << endl;
    //dtor

}

// resetId function to reset the nextId to 1
void Mechanic::resetId()
{
    // cout << "resetId (Mechanic)" << endl;
    nextId = 1;
}

// addRepair function to add a repair to the mechanic
void Mechanic::addRepair(Repair* repair)
{
    // cout << "addRepair (Mechanic)" << endl;
    Entity::addRepair(repair);
}

// print function
void Mechanic::print() const
{

    Entity::print();
    cout << "Mechanic: " << id << " - " << name << " - " << repairs.size() << " repairs (Mechanic)" << endl;
}



