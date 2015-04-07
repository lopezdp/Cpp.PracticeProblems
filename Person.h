//
//  Person.h Header File for Person Class
//  Ex.03-LopezDP
//
//  Created by David P. Lopez on 3/29/15.
//  Copyright (c) 2015 David P. Lopez. All rights reserved.
//

#ifndef Person_h
#define Person_h

#include <iostream>
#include <string>

using namespace std;

class Person
{
    private:
        //instance variables of the person class
        string lastN;
        string firstN;
    
    public:
        //constructors
        Person();
        Person(string lastN, string firstN);//initialize an object by passing two string for last, first names
        ~Person();
    
        //getters
        string getName() const { return lastN + ", " + firstN; }; //gets the name of the person
    
        //setters
        void setName(string lastN, string firstN);
};

#endif
