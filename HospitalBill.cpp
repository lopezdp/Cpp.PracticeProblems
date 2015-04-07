//
//  HospitalBill.cpp
//  Ex.03-LopezDP
//
//  Created by David P. Lopez on 4/2/15.
//  Copyright (c) 2015 David P. Lopez. All rights reserved.
//

#include "HospitalBill.h"

HospitalBill::HospitalBill()
{
    cout << "Inside of default constructor" << endl;
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
    
    cout << "Detailed Hospital Charges:";
    bills.print();
    
    cout << "Total Hospital Charges: " << totalcharges;
}

HospitalBill::~HospitalBill()
{
    cout << "Closing Hospital Billing System" << endl;
}

