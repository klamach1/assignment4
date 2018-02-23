//
//  RINT.cpp
//  assignment4
//
//  Created by Chris Lawrence on 2/22/18.
//  Copyright © 2018 Chris Lawrence. All rights reserved.
//

#include "RINT.h"

RINT::RINT() {
    intVal = 0;
}
RINT::RINT(int theInt) {
    
    intVal = theInt;
    
}

RINT &RINT::operator+(int theInt) {
    intVal += theInt;
    return *this;
}

RINT &RINT::operator+(RINT theRint) {
    *this = theRint.operator+(intVal);
    return *this;
}

RINT &RINT::operator-(int theInt) {
    intVal -= theInt;
    return *this;
}

RINT &RINT::operator-(RINT theRint) {
    *this = theRint.operator-(intVal);
    return *this;
}

RINT &RINT::operator=(int theInt) {
    intVal = theInt;
    return *this;
}

std::ostream &operator<<( std::ostream &output, const RINT &rInt ) {
    output << rInt;
    return output;
}

std::istream &operator>>( std::istream &input, RINT &rInt ) {
    
    input >> rInt;
    return input;
}
