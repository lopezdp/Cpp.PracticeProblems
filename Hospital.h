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
#include "HospitalBill.h"


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
    
    Doctor *ptrDoctors; //pointer to an array of doctors
    Patient *ptrPatients; //pointer to an array of patients
    HospitalBill *ptrBill; //pointer to array of patient Bills
    HospitalCharges *ptrCharges;
    
    //private member functions to create arrays of Doctors & Patients that are "contained" within a Hospital class
    void createDocArr(int size)
    {
        numDoctors = size;
        
        ptrDoctors = new Doctor[size];
        
        for(int i = 0; i < size; i++)
        {
            cout << endl;
            cout << "What is Doctor #" << i+1 << "'s Specialty? ";
            cin >> temp1;
            ptrDoctors[i].setSpecialty(temp1);
            
            cout << "What is the Doctor #" << i+1 << "'s Last Name? ";
            cin >> temp1;
            
            cout << "What is the Doctor #" << i+1 << "'s First Name? ";
            cin >> temp2;
            ptrDoctors[i].setDrName(temp1, temp2);
            cout << endl;
        }
    }
    
    void createPatArr(int size, string hospitalName)
    {
        double pharmCharge, docFees, rmCharge, xRayCharge;
        numPatients = size;
        
        ptrPatients = new Patient[size];
        ptrBill = new HospitalBill[size];
        
        for(int i = 0; i < size; i++)
        {
            cout << endl;
            cout << "What is Patient " << i+1 << "'s ID? ";
            cin >> temp1;
            ptrPatients[i].setPatientID(temp1);
            
            cout << "What is Patient " << i+1 << "'s Last Name? ";
            cin >> temp1;
            
            cout << "What is Patient " << i+1 << "'s First Name? ";
            cin >> temp2;
            ptrPatients[i].setPatName(temp1, temp2);
            
            cout << "What is Patient " << i+1 << "'s date of birth? ";
            getline(cin,temp1);
            ptrPatients[i].setDob(temp1);
            
            getline(cin,temp2);
            cout << "Who is Patient " << i+1 << "'s Doctor?";
            getline(cin,temp1);
            ptrPatients[i].setAttendingDr(temp1);
            
            //cin.clear();
            cout << "When was Patient " << i+1 << "'s Admission Date? ";
            getline(cin,temp1);
            ptrPatients[i].setAdmissionDate(temp1);
            cout << endl;
    
            cout << "How much does the Patient owe in pharmacy charges? ";
            cin >> pharmCharge;
            
            cout << "How much does the Patient owe in Doctor fees? ";
            cin >> docFees;
            
            cout << "How much does the Patient owe in room charges? ";
            cin >> rmCharge;
            
            cout << "How much does the Patient owe in x-Ray charges? ";
            cin >> xRayCharge;
            cout << endl;
            
            ptrBill[i] = HospitalBill(hospitalName, ptrPatients[i].getPatientID(), pharmCharge , docFees, rmCharge, xRayCharge);
        }
    }
    
public:
    Hospital(string hospitalName, string hospitalURL, string hospitalTelephoneNumber, int numDocs, int numPats);
    ~Hospital();
    
    //getters
    string getHospitalName() const {return hospitalName;};
    string getHospitalURL() const {return hospitalURL;};
    string getHospitalTelephoneNumber() const {return hospitalTelephoneNumber;};
    
    //utility functions
    void printDocs();
    void printPats();

};

#endif
