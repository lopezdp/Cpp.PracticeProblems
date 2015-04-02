//
//  Patient.h
//  Ex.03-LopezDP
//
//  Created by David P. Lopez on 4/1/15.
//  Copyright (c) 2015 David P. Lopez. All rights reserved.
//

#ifndef Patient_H
#define Patient_H

#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

class Patient : public Person
{
private:
    string patientID;
    string dob;
    string attendingPhysician;
    string dateAdmittedToHospital;
    
public:
    Patient();
    Patient(string patientID, string dob, string attendingPhysician, string dateAdmittedToHospital, string lastN, string firstN);
    ~Patient();
    
    //getters
    string getPatientID() { return patientID; }
    string getDob() { return dob; }
    string getAttendingDr() { return attendingPhysician; }
    string getAdmissionDate() { return dateAdmittedToHospital; }
};

#endif

