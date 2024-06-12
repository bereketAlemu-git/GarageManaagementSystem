#include "Repair.h"
#include "Garage.h"
#include <iostream>
#include <string>
using namespace std;

const string Repair::NOTCOMPLETE = "not complete";

// Constructor
Repair::Repair(int repairCode, double cost){
    //cout << "Repair" << endl;
    this->repairCode = repairCode;
    this->cost = cost;
    this->mechanicId = NOTCOMPLETE;
}

// Destructor
bool Repair::isComplete(){
    //cout << "isComplete (Repair)" << endl;
    if (mechanicId == NOTCOMPLETE){
        return false;
    }
    else{
        return true;
    }
}

// completeRepair function to set the mechanicId
void Repair::completeRepair(const string& mechanicId){
    //cout << "completeRepair (Repair)" << endl;
    this->mechanicId = mechanicId;
}

// print function
void Repair::print()const{
    cout << "code: " << Garage::REPAIRS[repairCode] << " , cost:" << cost << " , mechanicId: " << mechanicId << endl;
}

