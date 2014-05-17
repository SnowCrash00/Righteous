//
//  GasPump.cpp
//  C++ Practice
//
//  Created by Christopher Tobias on 4/22/14.
//  Copyright (c) 2014 Christopher Tobias. All rights reserved.
//

#include "GasPump.h"

const double currentGasPrice = 4;

void GasPump::AmountFuelDispensed(){
    std::cout << fuel;
}

void GasPump::costPerGallon(){
    std::cout << fuel * 4;
}

void GasPump::reset() {
    this->price = 0;
    this->fuel = 0;
}


