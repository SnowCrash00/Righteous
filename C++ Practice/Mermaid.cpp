//
//  Mermaid.cpp
//  C++ Practice
//
//  Created by Christopher Tobias on 4/18/14.
//  Copyright (c) 2014 Christopher Tobias. All rights reserved.
//

#include "Mermaid.h"
#include <iostream>

using namespace std;

Mermaid::Mermaid(){
    
}

void Mermaid::foosh() {
    cout << "I love fish under the sea." << endl;
    
}

void Mermaid::foosh() const {
    cout << "I am the constant function";
}
