#pragma once
#include "iostream"
#include "Person.h"

using namespace std;

class Teacher:public Person
{
public:
    Teacher(){
        name = "Radu";
        age = 78;
    }

   void teacher_gets_in_the_transport(){
        cout <<"Teacher gets in the bus" << endl;
    }

    void teacher_gets_out_from_the_transport(){
        cout <<" Teacher gets out from the bus" << endl;
    }

    void pay_for_ride()override{
        cout << "He/she pays for the public transportation" << endl;
    }


    void teach_the_students() override{

        cout <<"The teacher is ready to teach the students about the history of the Roman Empire. Let's see if they have done their homework" << endl;
    }
};
