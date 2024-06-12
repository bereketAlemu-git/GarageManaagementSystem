#include "Customer.h"
using namespace std;

const char Customer::code = 'C';
int Customer::nextId = 1;

//Constructor
Customer::Customer(const string name, const string make, const string model, int year) : 
Entity(code, nextId++, name), car(make, model, year)
{
    // cout << "Customer" << endl;
    // cout << "Customer: " << id << " - " << name << " - with car: " << car.getMake() << " " << car.getModel() << " " << car.getYear() << " (Customer)" << endl;

}

//Destructor
Customer::~Customer()
{
    // cout << "~Customer" << endl;
}

//getCar function
Car Customer::getCar() const
{   
    // cout << "getCar (Customer)" << endl;   
    return car;
}



//getID function
string Customer::getID() const
{
    // cout << "getID (Customer)" << endl;
    return getId();
}

//addRepair function to add a repair to the customer
void Customer::addRepair(Repair* repair)
{
    // cout << "addRepair (Customer)" << endl;
    Entity::addRepair(repair);
}

void Customer::print() const
{
    Entity::print();
    getCar().print();
}

//resetId function to reset the nextId to 1
void Customer::resetId()
{
    // cout << "resetId (Customer)" << endl;
    nextId = 1;
}


