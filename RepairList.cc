#include "RepairList.h"
#include <iostream>
using namespace std;


// Constructor
RepairList::RepairList(){
    // cout << "RepairList" << endl;
    head = NULL;
    tail = NULL;
}

// Destructor
RepairList::~RepairList(){
    // cout << "~RepairList" << endl;
    Node* currentNode = head;
    while (currentNode != NULL){
        Node* next = currentNode->next;
        delete currentNode->data;
        delete currentNode;
        currentNode = next;
    }
}

// add function at the end of the list
void RepairList::add(Repair* repair){
    // cout << "add (RepairList)" << endl;
    Node* newNode = new Node;
    newNode->data = repair;
    newNode->next = NULL;
    if (head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}

// getNext function to get the next repair
Repair* RepairList::getNext(){
    // cout << "getNext (RepairList)" << endl;
    if (head == NULL){
        return NULL;
    }
    else{
        Repair* repair = head->data;
        Node* temp = head;
        head = head->next;
        //delete temp->data;
        delete temp;
        return repair;
    }
}

// isEmpty function to check if the list is empty
bool RepairList::isEmpty(){
    // cout << "isEmpty (RepairList)" << endl;
    if (head == NULL){
        return true;
    }
    else{
        return false;
    }
}

// size function to get the size of the list
int RepairList::size()const{
    //cout << "size (repairList)" << endl;
    int count = 0;
    Node* current = head;
    while (current != NULL){
        count++;
        current = current->next;
    }
    return count;
}

// print function
void RepairList::print() const{
    // cout << "print (repairList)" << endl;
    Node* current = head;
    while (current != NULL){
        current->data->print();
        current = current->next;
    }
}