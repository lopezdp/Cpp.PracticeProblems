//
//  Patient.h
//  Ex.03-LopezDP
//
//  Created by David P. Lopez on 4/1/15.
//  Copyright (c) 2015 David P. Lopez. All rights reserved.
//

#ifndef Patient_H
#define Patient_H

#include <iostream>
#include <string>
#include "Person.h"

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
        string getPatientID() const { return patientID; }
        string getDob() const { return dob; }
        string getAttendingDr() const { return attendingPhysician; }
        string getAdmissionDate() const { return dateAdmittedToHospital; }
    
        //setters
        void setPatientID(string patientID);
        void setDob(string dob);
        void setAttendingDr(string attendingPhysician);
        void setAdmissionDate(string dateAdmittedToHospital);
    
        void setPatName(string lastN, string firstN);
};

#endif

