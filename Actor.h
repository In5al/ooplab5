#pragma once
#include "iostream"
#include "Person.h"
using namespace std;


class Actor:public Person
{
public:

    string actors[4] = {"Phoenix", "Bale", "Dwayne","Walker"};

    void get_the_actors(int n){
        cout << actors[n] << " has to play a major role today" << endl;
    }

    void drive() override
    {
    	cout << "The actor gets in his Porsche" << endl;
    }

    void arrive() override
    {
    	cout << "The actor is at the filming site " << endl;
    }

    void play_the_role() override
    {
        cout << "The performance of the actor left the audience in complete shock as the actor poured everything into his role " << endl;
    }

};
