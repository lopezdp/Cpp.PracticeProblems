//
//  Hospital.cpp
//  Ex.03-LopezDP
//
//  Created by David P. Lopez on 4/1/15.
//  Copyright (c) 2015 David P. Lopez. All rights reserved.
//

#include "Hospital.h"

Hospital::Hospital(string hospitalName, string hospitalURL, string hospitalTelephoneNumber, int numDocs, int numPats)
{   
    this->hospitalName = hospitalName;
    this->hospitalURL = hospitalURL;
    this->hospitalTelephoneNumber = hospitalTelephoneNumber;
    
    Hospital::createDocArr(numDocs);
    Hospital::createPatArr(numPats, hospitalName);
}

Hospital::~Hospital()
{
    cout << "Buldozing the Hospital" << endl;

    delete [] ptrDoctors;
    delete [] ptrPatients;
    delete [] ptrBill;
}

void Hospital::printDocs()
{
    cout << endl;
    cout << "This is the list of Doctors at: " << hospitalName << endl;
    cout << "==================================================" << endl;
    cout << endl;
    
    for(int i = 0; i < Hospital::numDoctors; i++)
    {
        cout << "Doctor #" << i+1 <<"'s Name is: " << ptrDoctors[i].Doctor::getName() << endl;
        cout << "Doctor #" << i+1 <<"'s Specialty is: " << ptrDoctors[i].Doctor::getSpecialty() << endl;
        cout << endl;
    }
}

void Hospital::printPats()
{
    cout << "This is the list of Patients at: " << hospitalName << endl;
    cout << "==================================================" << endl;
    cout << endl;
    
    for(int i = 0; i < Hospital::numPatients; i++)
    {
        cout << "Patient #" << i+1 <<"'s Name is: " << ptrPatients[i].Patient::getName() << endl;
        cout << "Patient #" << i+1 <<"'s Patient ID is: " << ptrPatients[i].Patient::getPatientID() << endl;
        cout << "Patient #" << i+1 <<"'s Date of Birth is: " << ptrPatients[i].Patient::getDob() << endl;
        cout << "Patient #" << i+1 <<"'s Attending Physician is: " << ptrPatients[i].Patient::getAttendingDr() << endl;
        cout << "Patient #" << i+1 <<"'s Admission Date was: " << ptrPatients[i].Patient::getAdmissionDate() << endl;
        cout << endl;
        
        cout << "This is the Hospital Bill for Patient: " << ptrPatients[i].Patient::getName() << endl;
        cout << "==================================================" << endl;
        ptrBill[i].HospitalBill::print();
        cout << endl;
    }
}
