//
//  Hospital.cpp
//  Ex.03-LopezDP
//
//  Created by David P. Lopez on 4/1/15.
//  Copyright (c) 2015 David P. Lopez. All rights reserved.
//

#include "Hospital.h"

Hospital::Hospital(string hospitalName, string hospitalURL, string hospitalTelephoneNumber, int numDocs, int numPats)
{
    this->hospitalName = hospitalName;
    this->hospitalURL = hospitalURL;
    this->hospitalTelephoneNumber = hospitalTelephoneNumber;
    
    Hospital::createDocArr(numDocs);
    Hospital::createDocArr(numPats);
}

Hospital::~Hospital()
{
    cout << "Buldozing the Hospital" << endl;
    delete [] ptrDoctors;
    delete [] ptrPatients;
}
