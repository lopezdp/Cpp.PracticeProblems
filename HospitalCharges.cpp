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
    cout << "Inside of Default Constructor" << endl;
}

HospitalCharges::HospitalCharges(double pharmacyCharges, double doctorFees, double roomCharges, double xRayCharges)
{
    this->pharmacyCharges = pharmacyCharges;
    this->doctorFees = doctorFees;
    this->roomCharges = roomCharges;
    this->xRayCharges = xRayCharges;
}

void HospitalCharges::print() const
{
    cout << "Pharmacy Charges: " << pharmacyCharges;
    cout << "Doctor Fees: " << doctorFees;
    cout << "Room Charges: " << roomCharges;
    cout << "x-Ray Charges: " << xRayCharges;
}

HospitalCharges::~HospitalCharges()
{
    cout << "Inside of Default Constructor" << endl;
}

