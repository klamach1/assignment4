//
//  RINT.hpp
//  assignment4
//
//  Created by Chris Lawrence on 2/22/18.
//  Copyright © 2018 Chris Lawrence. All rights reserved.
//

#ifndef RINT_h
#define RINT_h

#include <stdio.h>
#include <iostream>

class RINT {
public:
    
    RINT();
    RINT(int);
    
    RINT &operator+(int);
    
    RINT &operator+(RINT);
    
    RINT &operator-(int);
    
    RINT &operator-(RINT);
    
    RINT &operator=(int);
    
    friend std::ostream &operator<<( std::ostream &, const RINT & );
    
    friend std::istream &operator>>( std::istream &, RINT & );
    
    
    
private:
    int intVal;
};
#endif /* RINT_hpp */
