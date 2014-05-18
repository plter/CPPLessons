//
//  Man.h
//  L03Classes
//
//  Created by plter on 14-2-26.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#ifndef __L03Classes__Man__
#define __L03Classes__Man__

#include <iostream>
#include "People.h"

class Man:public People {
    
public:
    Man(int age);
    void sayHello();
};

#endif /* defined(__L03Classes__Man__) */
