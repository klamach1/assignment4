//
//  INT.h
//  assignment4
//
//  Created by Chris Lawrence on 2/22/18.
//  Copyright © 2018 Chris Lawrence. All rights reserved.
//
//  Class that represents an object version of an integer.
//  Class allows for implicit conversion to an integer through the
//  operator int() override.
//  Class also implements operator overrides for -- & ++ (pre and post),
//  += and -= operators.
//

#ifndef INT_h
#define INT_h

#include <stdio.h>

class INT {
public:
    
    INT();
    INT(int theInt);
    
    operator int();
    
    //prefix
    INT &operator++();
    //postfix
    INT operator++(int);
    
    //prefix
    INT &operator--();
    //postfix
    INT operator--(int);
    
    INT &operator+=(const INT&);
    
    INT &operator+=(int);
    
    INT &operator-=(const INT&);
    
    INT &operator-=(int);
    
    
    
private:
    int intVal;
};

#endif /* INT_hpp */
