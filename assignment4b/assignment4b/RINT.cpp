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

int operator+(int theInt, const RINT &theRint) {
    return theInt += theRint.intVal;
}

RINT RINT::operator+(const RINT& theRint) {
    RINT result;
    result.intVal = this->intVal + theRint.intVal;
    return result;
}

RINT RINT::operator+(int theInt) {
    RINT result;
    result.intVal = this->intVal + theInt;
    return result;
}

RINT RINT::operator+() {
    intVal = +intVal;
    return *this;
}

int operator-(int theInt, const RINT& theRint) {
    return theInt -= theRint.intVal;
}

RINT RINT::operator-(const RINT& theRint) {
    RINT result;
    result.intVal = this->intVal - theRint.intVal;
    return result;
}

RINT RINT::operator-(int theInt) {
    RINT result;
    result.intVal = this->intVal - theInt;
    return result;
}

RINT RINT::operator-() {
    intVal = -intVal;
    return *this;
}

RINT &RINT::operator=(int theInt) {
    intVal = theInt;
    return *this;
}

std::ostream &operator<<( std::ostream &output, const RINT &rInt ) {
    output << rInt.intVal;
    return output;
}

std::istream &operator>>( std::istream &input, RINT &rInt ) {
    
    input >> rInt.intVal;
    return input;
}
