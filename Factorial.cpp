//
//  Factorial.cpp
//  Factorial_CPP
//
//  Created by Oguzhan Gungor on 24/04/13.
//  Copyright (c) 2013 Oguzhan Gungor. All rights reserved.
//

#include "Factorial.h"


int Factorial::factorial(int num){
    
    if(num == 1)
        return 1;
    else return num * this->factorial(num-1);
}