

#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
        Car(string make, string model, int year);
        ~Car();
        void print() const;
        string getMake() const;
        string getModel() const;
        int getYear() const;
    private:
        string make;
        string model;
        int year;
};
#endif
