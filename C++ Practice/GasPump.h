//
//  Grade.h
//  C++ Practice
//
//  Created by Christopher Tobias on 4/22/14.
//  Copyright (c) 2014 Christopher Tobias. All rights reserved.
//

#ifndef __C___Practice__Grade__
#define __C___Practice__Grade__

#include <iostream>

#endif /* defined(__C___Practice__Grade__) */


// behavior of a gas pump:
// selects which type of fuel, shows price per gallon, charges customer,
//
class GasPump {
private:
    int fuel;
    int price;
public:
    void AmountFuelDispensed();
    void amountCharged();
    void costPerGallon();
    void reset();
    void stopFuel();
    
    
};