//
//  Doctor.cpp
//  Ex.03-LopezDP
//
//  Created by David P. Lopez on 3/30/15.
//  Copyright (c) 2015 David P. Lopez. All rights reserved.
//

#include "Doctor.h"

Doctor::Doctor(string dSpec, string lastN, string firstN) : Person(lastN, firstN)
{
    this->dSpec = dSpec;
}

Doctor::~Doctor()
{
    cout << "Inside of Doctor Destructor" << endl;
}

void Doctor::setSpecialty(string dSpec)
{
    this->dSpec = dSpec;
}

void Doctor::setDrName(string lastN, string firstN) 
{
    Person::setName(lastN, firstN);
}
