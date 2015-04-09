//
//  HospitalCharges.cpp
//  Ex.03-LopezDP
//
//  Created by David P. Lopez on 4/1/15.
//  Copyright (c) 2015 David P. Lopez. All rights reserved.
//

#include "HospitalCharges.h"

HospitalCharges::HospitalCharges()
{
    cout << "Inside of HospitalCharges Constructor" << endl;
}

HospitalCharges::HospitalCharges(double pharmacyCharges, double doctorFees, double roomCharges, double xRayCharges)
{
    this->pharmacyCharges = pharmacyCharges;
    this->doctorFees = doctorFees;
    this->roomCharges = roomCharges;
    this->xRayCharges = xRayCharges;
}

void HospitalCharges::printCharges() const
{
    cout << "Pharmacy Charges: " << pharmacyCharges << endl;
    cout << "Doctor Fees: " << doctorFees << endl;
    cout << "Room Charges: " << roomCharges << endl;;
    cout << "x-Ray Charges: " << xRayCharges << endl;;
}

HospitalCharges::~HospitalCharges()
{
    cout << "Inside of HospitalCharges Destructor" << endl;
}

