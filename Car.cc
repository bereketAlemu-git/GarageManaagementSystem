#include "Car.h"

//Constructor
Car::Car(string make, string model, int year)
{   //cout << "Car" << endl;
    this->make = make;
    this->model = model;
    this->year = year;
}

// Destructor
Car::~Car()
{
    // cout << "~/Car" << endl;
}

void Car::print() const
{
    //cout << "Car: ";
    cout << year << " " << make << " " << model << endl;
}

// Get make function
string Car::getMake() const
{
    // cout << "getMake (Car)";
    return make;
}

// Get model function
string Car::getModel() const
{
    // cout << "getModel (Car)";
    return model;
}

// Get year function
int Car::getYear() const
{
    // cout << "getYear (Car)";
    return year;
}