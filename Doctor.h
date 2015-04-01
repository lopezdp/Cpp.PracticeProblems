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
        string dSpec;
    
    public:
        Doctor();
        Doctor(string aSpec, string lastN, string firstN);
        ~Doctor();
    
        //setters
        void setSpecialty();
    
        //getters
        string getSpecialty() { return dSpec; }
};

#endif
