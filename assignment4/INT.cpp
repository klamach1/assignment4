//
//  INT.cpp
//  assignment4
//
//  Created by Chris Lawrence on 2/22/18.
//  Copyright © 2018 Chris Lawrence. All rights reserved.
//
// Implementation of INT Class that represents an object
// version of an integer.
//
// See header for relevant comments
//

#include "INT.h"

INT::INT() {
    intVal = 0;
}

INT::INT(int theInt) {
    intVal = theInt;
}

INT::operator int() {
    return intVal;
}

//prefix increment
INT &INT::operator++() {
    ++intVal;
    return *this;
}
//postfix increment
INT INT::operator++(int) {
    INT tempINT = *this;
    ++intVal;
    return tempINT;
}

//prefix increment
INT &INT::operator--() {
    --intVal;
    return *this;
}

//postfix increment
INT INT::operator--(int theInt) {
    INT tempINT = *this;
    --intVal;
    return tempINT;
}

INT &INT::operator+=(const INT &theInt) {
    intVal += theInt.intVal;
    return *this;
}

INT &INT::operator+=(int theInt) {
    intVal += theInt;
    return *this;
}

INT &INT::operator-=(const INT &theInt) {
    intVal -= theInt.intVal;
    return *this;
}

INT &INT::operator-=(int theInt) {
    intVal -= theInt;
    return *this;
}
