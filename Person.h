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
        string fName;
        string lName;
    
    public:
        //constructors
        Person();
        Person(string lastN, string firstN);
        ~Person();
    
        //setters
        void setName(string last, string first);
    
        //getters
        string getName(){ return lName + fName; };
    
};

#endif
