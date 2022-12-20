#pragma once
#include "iostream"
#include "person.h"
using namespace std;

class Driver:Person
{
public:
    string drivers[4] = {"Tom", "Iulius", "Andrei","Dany"};

    void get_the_command(int n){
        cout << drivers[n] << " get the command" << endl;
    }

    void drive() override
    {
    	cout << "Drive the car" << endl;
    }

    void arrive() override
    {
    	cout << "Arrived at the destination" << endl;
    }

    void wait_customer() override
    {
        cout << "Waiting the customer" << endl;
    }

    void get_money_from_customer() override
    {
        cout << "Driver gets the money from the customer" << endl;
    }
};
