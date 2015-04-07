//
//  Hospital.h
//  Ex.03-LopezDP
//
//  Created by David P. Lopez on 4/1/15.
//  Copyright (c) 2015 David P. Lopez. All rights reserved.
//

#ifndef Hospital_h
#define Hospital_h

#include <iostream>
#include <string> 

#include "Doctor.h"
#include "Patient.h"

using namespace std;

class Hospital
{
private:
    string hospitalName;
    string hospitalURL;
    string hospitalTelephoneNumber;
    
    int numDoctors;
    int numPatients;
    
    string temp1;
    string temp2;
    
    Doctor *ptrDoctors; //pointer to an rray of doctors
    Patient *ptrPatients; //pointer to an array of patients
    
    //private member functions to create arrays of Doctors & Patients that are "contained" within a Hospital class
    void createDocArr(int size)
    {
        numDoctors = size;
        
        ptrDoctors = new Doctor[size];
        
        for(int i = 0; i < size; i++)
        {
            cout << "What is the Doctor " << i+1 << "'s Specialty? ";
            cin >> temp1;
            ptrDoctors[i].setSpecialty(temp1);
            
            cout << "What is the Doctor' " << i+1 << "s Last Name? ";
            cin >> temp1;
            
            cout << "What is the Doctor' " << i+1 << "s First Name? ";
            cin >> temp2;
            ptrDoctors[i].setDrName(temp1, temp2);
        }
    }
    
    void createPatArr(int size)
    {
        numPatients = size;
        
        ptrPatients = new Patient[size];
        
        for(int i = 0; i < size; i++)
        {
            cout << "What is the Patient " << i+1 << "'s ID? ";
            cin >> temp1;
            ptrPatients[i].setPatientID(temp1);
            
            cout << "What is the Patient " << i+1 << "'s Last Name? ";
            cin >> temp1;
            
            cout << "What is the Patient " << i+1 << "'s First Name? ";
            cin >> temp2;
            ptrPatients[i].setPatName(temp1, temp2);
            
            cout << "What is the Patient " << i+1 << "'s date of birth? ";
            cin >> temp1;
            ptrPatients[i].setDob(temp1);
            
            cout << "Who is the Patient " << i+1 << "'s Doctor? ";
            cin >> temp1;
            ptrPatients[i].setAttendingDr(temp1);
            
            cout << "What is the Patient " << i+1 << "'s Admission Date? ";
            cin >> temp1;
            ptrPatients[i].setAdmissionDate(temp1);
        }
    }
    
public:
    Hospital(string hospitalName, string hospitalURL, string hospitalTelephoneNumber, int numDocs, int numPats);
    ~Hospital();
    
    //getters
    string getHospitalName() const {return hospitalName;};
    string getHospitalURL() const {return hospitalURL;};
    string getHospitalTelephoneNumber() const {return hospitalTelephoneNumber;};
};

#endif
