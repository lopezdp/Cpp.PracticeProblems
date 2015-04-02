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
    double getPharmCharge() {return pharmacyCharges;};
    double getDocFees() {return doctorFees;};
    double getRmCharge() {return roomCharges;};
    double getXRayCharge() {return xRayCharges;};
};

#endif
