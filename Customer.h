#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>
#include "Entity.h"
#include "Car.h"

class Customer:public Entity{
    public:
        Customer(const string name, const string make, const string model, int year);
        ~Customer();
        Car getCar() const;
        string getID() const;
        static void resetId();
        void print() const;
        void addRepair(Repair* repair);
    private:
        static const char code;
        static int nextId;
        Car car;
};
#endif
