
#include "Garage.h"


const string Garage::REPAIRS[NUM_REPAIRS] = {"Oil Change", "Brake Check", "Tire Rotation", 
"Battery Check", "Air Filter Replacement", "Coolant Flush", "Transmission Flush", "A/C Recharge",
 "Engine Diagnostic", "Brake Pad Replacement"};

 //Constructor
 Garage::Garage(){
    //  cout << "Garage" << endl;
 }

 //Destructor
 Garage::~Garage() {
    for (Customer* customer : customers) {
        delete customer;
    }

    for (Mechanic* mechanic : mechanics) {
        delete mechanic;
    }
    // cout << "~Garage" << endl;
}

// addMechanic function to add a mechanic to the garage
void Garage::addMechanic(const string name){
    // cout << "addMechanic(Garage)" << endl;
    Mechanic* m = new Mechanic(name);
    mechanics.push_back(m);
}

// addCustomer function to add a customer to the garage
void Garage::addCustomer(const string name, const string make, const string model, int year){
    // cout << "addCustomer (Garage)" << endl;
    Customer * c= new Customer(name, make, model, year);
    customers.push_back(c);
}

// addRepair function to add a repair to the customer
void Garage::addRepair(string customerId, int repairCode, double cost) {
    // cout << "addRepair (Garage)" << endl;
    Customer* customer = getCustomer(customerId);
    //if customer is found add the repair else print error
    if (customer) {
        Repair* repair = new Repair(repairCode, cost);
        customer->addRepair(repair);
    } else {
        cout << "Error: Customer not found.(garage)" << endl;
    }
}

// makeNextRepair function to assign the next repair to the mechanic for a customer
void Garage::makeNextRepair(const string mechanicId, const string customerId) {
    // cout << "makeNextRepair (Garage)" << endl;
    Mechanic* mechanic = getMechanic(mechanicId);
    Customer* customer = getCustomer(customerId);

    //if mechanic and customer are found else print error
    if (mechanic && customer) {
        //get the next repair for the customer
        Repair* repair = customer->getNextRepair();
        //if the repair is found else print error
        if (repair) {
            //complete the repair and add it to the mechanic
            repair->completeRepair(mechanicId);
            mechanic->addRepair(repair);

        } else {
            cout << "Error: No repair found for customer (g) " << customerId << endl;
        }
    } else {
        cout << "Error: Mechanic or Customer not found. (g)" << endl;
    }
}

// getCustomer function to get the customer by id
Customer* Garage::getCustomer(const string id) const{
    // cout << "getCustomer (garage)" << endl;
    for (Customer* customer : customers) {
        if (customer->getId() == id) {
            cout << "Customer found" << endl;
            return customer;
        }
    }
    cout << "Error: Customer not found. (garage)" << endl;
    return nullptr;
}

// getMechanic function to get the mechanic by id
Mechanic* Garage::getMechanic(const string id)const{
    // cout << "getMechanic (garage)" << endl;
    for (Mechanic* mechanic : mechanics) {
        if (mechanic->getId() == id) {
            return mechanic;
        }
    }
    cout << "Error: Mechanic not found. (garage)" << endl;
    return nullptr;
}

void Garage::printMechanics() const{
    for (Mechanic* mechanic : mechanics) {
        mechanic->print();
    }
}

void Garage::printCustomers() const{
    for (Customer* customer : customers) {
        customer->print();
    }
}

// printMechanicRepairs function to print the repairs for the mechanic
void Garage::printMechanicRepairs(const string id)const {
    Mechanic* mechanic = getMechanic(id);
    if (mechanic) {
        mechanic->printRepairs();
    } else {
        cout << "Error: Mechanic not found.(garage) " << endl;
    }
}
// printCustomerRepairs function to print the repairs for the customer
void Garage::printCustomerRepairs(const string id) const {
    Customer* customer = getCustomer(id);
    if (customer) {
        customer->printRepairs();
    } else {
        cout << "Error: Customer not found. (garage)" << endl;
    }
}

//resetIds function to reset the ids for the customer and mechanic
void Garage::resetIds(){
    Customer::resetId();
    Mechanic::resetId();
}