#include "Entity.h"
using namespace std;

// Constructor
Entity::Entity(char code, int num, const string name) : name(name), id(code + to_string(num))
{
    // cout << "Entity" << endl;

}

// Destructor
Entity::~Entity()
{
    // cout << "~Entity" << endl;
}

// hasRepairs function
bool Entity::hasRepairs()
{
    // cout << "hasRepairs (Entity)" << endl;
    return !repairs.isEmpty();
}

// addRepair function to add a repair to the entity
void Entity::addRepair(Repair* repair)
{
    // cout << "addRepair (Entity)" << endl;
    repairs.add(repair);
}

// getNextRepair function to get the next repair   
Repair* Entity::getNextRepair()
{
    // cout << "getNextRepair (Entity)" << endl;
    return repairs.getNext();
}

// getId function to get the id
string Entity::getId() const
{
    // cout << "getId (Entity)" << endl;
    return id;
}


void Entity::print() const
{
    cout << "ID: " << id << " Name: " << name << " Number of repairs: " << repairs.size() << endl;

}

void Entity::printRepairs() const
{
    print();
    repairs.print();
}


