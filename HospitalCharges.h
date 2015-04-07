//
//  HospitalCharges.h
//  Ex.03-LopezDP
//
//  Created by David P. Lopez on 4/1/15.
//  Copyright (c) 2015 David P. Lopez. All rights reserved.
//

#ifndef HospitalCharges_h
#define HospitalCharges_h

#include <iostream>
#include <string>

using namespace std;

class HospitalCharges
{
private:
    double pharmacyCharges;
    double doctorFees;
    double roomCharges;
    double xRayCharges;
    
public:
    HospitalCharges();
    HospitalCharges(double pharmacyCharges, double doctorFees, double roomCharges, double xRayCharges);
    ~HospitalCharges();
    
    //getters
    double getPharmCharge() const {return pharmacyCharges;};
    double getDocFees() const {return doctorFees;};
    double getRmCharge() const {return roomCharges;};
    double getXRayCharge() const {return xRayCharges;};
    
    //print function
    void print() const;
};

#endif
