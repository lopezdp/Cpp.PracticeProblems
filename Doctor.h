//
//  Doctor.h
//  Ex.03-LopezDP
//
//  Created by David P. Lopez on 3/30/15.
//  Copyright (c) 2015 David P. Lopez. All rights reserved.
//

#ifndef Doctor_h
#define Doctor_h

#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

class Doctor : public Person
{
    private:
        string dSpec;//doctor specialty
    
    public:
        Doctor();
        Doctor(string dSpec, string lastN, string firstN);
        ~Doctor();
    
        //getters
        string getSpecialty() const { return dSpec; } // gets a doctor's specialty
    
        //setters
        void setSpecialty(string dSpec);
        void setDrName(string lastN, string firstN);
};

#endif
