//
//  INT.h
//  assignment4
//
//  Created by Chris Lawrence on 2/22/18.
//  Copyright © 2018 Chris Lawrence. All rights reserved.
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
    
    INT &operator+=(int);
    
    INT &operator-=(int);
    
    
    
private:
    int intVal;
};

#endif /* INT_hpp */
