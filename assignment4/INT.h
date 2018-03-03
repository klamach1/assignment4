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
    
    //ctors
    INT();
    INT(int theInt);
    
    //operator overload for the implicit conversion
    //of an INT to an int
    operator int();
    
    //prefix increment override
    INT &operator++();
    
    //postfix increment override
    INT operator++(int);
    
    //prefix decrement override
    INT &operator--();
    
    //postfix decrement override
    INT operator--(int);
    
    //override for += operator taking a
    //native INT type
    INT &operator+=(const INT&);
    
    //override for += operator taking an
    //int type, prevents conversion overhead
    INT &operator+=(int);
    
    //override for -= operator taking a
    //native INT type
    INT &operator-=(const INT&);
    
    //override for -= operator taking an
    //int type, prevents conversion overhead
    INT &operator-=(int);
    
    
    
private:
    //holds value of INT
    int intVal;
};

#endif /* INT_hpp */
