#include "iostream"
#include "string"
#include "Schedule.h"
#include <string>
#include <cstdlib>
//using namespace std;

class Car:Schedule
{
public:
    string model[9] = {"BMW", "Audi", "Mercedes","Porsche", "Toyota", "Nissan", "Hyundai", "Mazda", "Tesla"};

    void start_engine(int val){
        cout << "Start the engine of " << model[val] << endl;
    }

    void stop_engine(){
        cout << "Stop the engine" << endl;
    }
};
