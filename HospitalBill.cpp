//
//  HospitalBill.cpp
//  Ex.03-LopezDP
//
//  Created by David P. Lopez on 4/2/15.
//  Copyright (c) 2015 David P. Lopez. All rights reserved.
//

#include <iomanip>
#include "HospitalBill.h"

HospitalBill::HospitalBill()
{
    cout << "Inside of HospitalBill Constructor" << endl;
}

//constructor exhibiting aggregation. a HospitalBill "contains" or "has a" HospitalCharges
HospitalBill::HospitalBill(string hospitalName, string patientID, double pharmacyCharges, double doctorFees, double roomCharges, double xRayCharges)
{
    this->hospitalName = hospitalName;
    this->patientID = patientID;
    
    //initialize the bills Object by passing the HospitalBill arguments into the HospitalCharges Constructor
    bills = HospitalCharges::HospitalCharges(pharmacyCharges, doctorFees, roomCharges, xRayCharges);
    
    this->totalcharges = bills.getPharmCharge() + bills.getDocFees() + bills.getRmCharge() + bills.getXRayCharge();
}

//print function
void HospitalBill::print() const
{
    cout << "Hospital Name: " << hospitalName << endl;
    cout << "Patient ID: " << patientID << endl;
    cout << endl;
    
    cout << setfill(' ') << setw(10) << "" << "Detailed Hospital Charges:" << endl;
    cout << setfill(' ') << setw(10) << "" << setfill('-') << setw(26) << "-" << endl;
    bills.printCharges();
    cout << endl;
    
    cout << fixed << showpoint << setprecision(2);
    cout << setfill(' ') << setw(10) << "" << "Total Hospital Charges for: " << "$" << totalcharges;
    
    cout << endl;
    cout << endl;
    cout << endl;
}

HospitalBill::~HospitalBill()
{
    cout << "Closing Hospital Billing System" << endl;
}

