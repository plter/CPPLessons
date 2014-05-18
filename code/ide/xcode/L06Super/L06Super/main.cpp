//
//  main.cpp
//  L06Super
//
//  Created by plter on 14-2-26.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[])
{
    Man * m = new Man(21);
//    m->sayHello();
    m->People::sayHello();
    
    return 0;
}

