//
//  Person.cpp Class File
//  Ex.03-LopezDP
//
//  Created by David P. Lopez on 3/29/15.
//  Copyright (c) 2015 David P. Lopez. All rights reserved.
//

#include "Person.h"

Person::Person()
{
    //constructor
    cout << "Inside default constructor" << endl;
}


Person::Person(string lastN, string firstN)
{
    //Overriden Person Constructor
    cout << "Inside Overriden Person Constructor" << endl;
    lName = lastN;
    fName = firstN;
}

Person::~Person()
{
    cout << "Inside Person Destructor..." << endl;
}
