//
//  Patient.cpp
//  Ex.03-LopezDP
//
//  Created by David P. Lopez on 3/30/15.
//  Copyright (c) 2015 David P. Lopez. All rights reserved.
//

#include "Patient.h"

Patient::Patient(string patientID, string dob, string attendingPhysician, string dateAdmittedToHospital, string lastN, string firstN) : Person(lastN, firstN)
{
    this->patientID = patientID;
    this->dob = dob;
    this->attendingPhysician = attendingPhysician;
    this->dateAdmittedToHospital = dateAdmittedToHospital;
}

Patient::~Patient()
{
    cout << "Inside of Patient Destructor" << endl;
}

void Patient::setPatientID(string patientID)
{
    this->patientID = patientID;
}

void Patient::setDob(string dob)
{
    this->dob = dob;
}

void Patient::setAttendingDr(string attendingPhysician)
{
    this->attendingPhysician = attendingPhysician;
}

void Patient::setAdmissionDate(string dateAdmittedToHospital)
{
    this->dateAdmittedToHospital = dateAdmittedToHospital;
}

void Patient::setPatName(string lastN, string firstN)
{
    Person::setName(lastN, firstN);
}
