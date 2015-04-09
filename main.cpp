//
//  main.cpp
//  Ex.03-LopezDP
//  Hospital Billing System
//
//  Created by David P. Lopez on 3/29/15.
//  Copyright (c) 2015 David P. Lopez. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "Person.h"
#include "Doctor.h"
#include "Patient.h"
#include "Hospital.h"
#include "HospitalBill.h"
#include "HospitalCharges.h"

using namespace std;

int main() {
    
    string hospitalName, url, phone;
    int numDocs, numPats;

    cout << "What is the Hospital's Name? ";
    getline(cin,hospitalName);
    
    cout << "What is the Hospital's URL? ";
    cin >> url;
    
    cout << "What is the Hospital's telephone number? ";
    cin >> phone;
    

    do{
        cout << "How many Doctor's work at this Hospital? ";
        cin >> numDocs;
    }while(numDocs <= 0);
    
    do{
        cout << "How many patients is this hospital currently serving? ";
        cin >> numPats;
        cout << endl;
    }while(numPats <= 0);

    //Create Hospital and Person Objects that work & reside inside the hospital
    Hospital newHospital(hospitalName, url, phone, numDocs, numPats);
   
    newHospital.printDocs();
    newHospital.printPats();
    
    return 0;
}
