//
//  main.cpp
//  L02NS
//
//  Created by plter on 14-2-26.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <iostream>
#include "People.h"

using namespace jikexueyuan;

int main(int argc, const char * argv[])
{
    People *p = new People();
    p->sayHello();
    
    delete p;
    return 0;
}

