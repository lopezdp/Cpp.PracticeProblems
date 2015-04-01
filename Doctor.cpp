//
//  Doctor.cpp
//  Ex.03-LopezDP
//
//  Created by David P. Lopez on 3/30/15.
//  Copyright (c) 2015 David P. Lopez. All rights reserved.
//

#include "Doctor.h"

Doctor::Doctor(string aSpec, string lastN, string firstN) : Person(lastN, firstN)
{
    dSpec = aSpec;
}

Doctor::~Doctor()
{
    cout << "Inside of Doctor Destructor" << endl;
}
