//
//  HospitalBill.h
//  Ex.03-LopezDP
//
//  Created by David P. Lopez on 4/2/15.
//  Copyright (c) 2015 David P. Lopez. All rights reserved.
//

#ifndef HospitalBill_h
#define HospitalBill_h

#include <iostream>
#include <string>
#include "Patient.h"
#include "HospitalCharges.h"

using namespace std;

class HospitalBill
{
private:
    string hospitalName;
    string patientID;
    double totalcharges;
    
    HospitalCharges bills; //The Hospital Bill class "has a" or "contains" a Hospital Charges Class
    
public:
    HospitalBill(); //defult constructor
    HospitalBill(string hospitalName, string patientID, double pharmacyCharges, double doctorFees, double roomCharges, double xRayCharges);
    //destruction!!!!
    ~HospitalBill();
    
    //getters
    string getHospitalName() const {return hospitalName;};
    string getpatientID() const {return patientID;};
    
    //print function
    void print() const;
    
    
};


#endif
