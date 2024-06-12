#ifndef GARAGE_H
#define GARAGE_H

#include <iostream>
#include <string>
#include <iostream>
#include <vector>
#include "Customer.h"
#include "Mechanic.h" 
#include "Repair.h" 

using namespace std;

class Garage{
		
	public:	
		static const int NUM_REPAIRS = 10;
		static const string REPAIRS[NUM_REPAIRS]; 
		Garage();
		~Garage();
		void addMechanic(const string name);
		void addCustomer(const string name, const string make, const string model, int year);
		void addRepair(const string customerId, int repairCode, double cost);
		void makeNextRepair(const string mechanicId, const string customerId);
		Customer* getCustomer(const string id)const;
		Mechanic* getMechanic(const string id)const;
		void printMechanics()const;
		void printCustomers()const;
		void printMechanicRepairs(const string id)const;
		void printCustomerRepairs(const string id)const;
		void resetIds();
	private:
		vector<Customer*> customers;
		vector<Mechanic*> mechanics;
};
#endif