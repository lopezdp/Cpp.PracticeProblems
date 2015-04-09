//
//  HospitalCharges.cpp
//  Ex.03-LopezDP
//
//  Created by David P. Lopez on 4/1/15.
//  Copyright (c) 2015 David P. Lopez. All rights reserved.
//

#include <iomanip>
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
    cout << fixed << showpoint << setprecision(2);
    cout << setfill(' ') << setw(10) << "" << "Pharmacy Charges: " << "$" << pharmacyCharges << endl;
    cout << setfill(' ') << setw(10) << "" << "Doctor Fees: " << setw(7) << "$" << doctorFees << endl;
    cout << setfill(' ') << setw(10) << "" << "Room Charges: " << setw(7) << "$" << roomCharges << endl;;
    cout << setfill(' ') << setw(10) << "" << "x-Ray Charges: " << setw(6) << "$" << xRayCharges << endl;;
}

HospitalCharges::~HospitalCharges()
{
    cout << "Inside of HospitalCharges Destructor" << endl;
}

