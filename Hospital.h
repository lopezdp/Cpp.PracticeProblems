//
//  Hospital.h
//  Ex.03-LopezDP
//
//  Created by David P. Lopez on 4/1/15.
//  Copyright (c) 2015 David P. Lopez. All rights reserved.
//

#ifndef Hospital_h
#define Hospital_h

#include <iostream>
#include <string> 

using namespace std;

class Hospital
{
private:
    string hospitalName;
    string hospitalURL;
    string hospitalTelephoneNumber;
    
public:
    Hospital();
    Hospital(string hospitalName, string hospitalURL, string hospitalTelephoneNumber);
    
    //getters
    string getHospitalName(){return hospitalName;};
    string getHospitalURL(){return hospitalURL;};
    string getHospitalTelephoneNumber(){return hospitalTelephoneNumber;};
    
    ~Hospital();
};

#endif
