#pragma once
#include "iostream"
#include "Schedule.h"
using namespace std;

class Economy_Management:Schedule
{
public:
    float income = 0;
};

class Income:public Economy_Management
{
public:

    float calculate_income(int ride_price){
        income = income + ride_price;
        cout << "rideprice : " << ride_price << "       income : " << income << endl;
        return int(income);
    }

};
