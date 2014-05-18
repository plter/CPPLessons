//
//  main.cpp
//  L07Functions
//
//  Created by plter on 14-2-26.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[])
{

    People *p = new Man(20);
    p->sayHello();
    p->eat();
    return 0;
}

