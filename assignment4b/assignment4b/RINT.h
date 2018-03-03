//
//  RINT.hpp
//  assignment4
//
//  Created by Chris Lawrence on 2/22/18.
//  Copyright © 2018 Chris Lawrence. All rights reserved.
//  Class that represents a restricted object version of an integer.
//  Class implements a restricted set of operators and provides no
//  implicit conversion to an int.
//  Class implements operator overrides for unary and binary + and -
//  operators, the = assignment operator, and the << and >> operators

#ifndef RINT_h
#define RINT_h

#include <stdio.h>
#include <iostream>

class RINT {
public:

    //ctors
    RINT();
    
    RINT(int);
    
    //friend function to support adding a RINT to an int
    friend int operator+(int, const RINT&);
    
    //override to support unary + operator
    RINT operator+();
    
    //override to support binary + operator with
    //native add of a RINT to a RINT
    RINT operator+(const RINT&);
    
    //override to support binary + operator with
    //native add of an int to a RINT
    RINT operator+(int);
    
    //friend function to support subtracting a RINT from an int
    friend int operator-(int, const RINT&);
    
    //override to support unary - operator
    RINT operator-();
    
    //override to support binary - operator with
    //native subtract of an RINT from a RINT
    RINT operator-(const RINT&);
    
    //override to support binary - operator with
    //native subtract of an int from a RINT
    RINT operator-(int);
    
    //override to support assignment of an int to a RINT
    RINT &operator=(int);
    
    //friend function to support override of << to support output stream
    friend std::ostream &operator<<( std::ostream &, const RINT & );
    
    //friend function to support override of << to support input stream
    friend std::istream &operator>>( std::istream &, RINT & );
    
    
    
private:
    //holds int value of RINT object
    int intVal;
};
#endif /* RINT_hpp */
