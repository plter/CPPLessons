//
//  main.cpp
//  L05SuperC
//
//  Created by plter on 14-2-26.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[])
{
    
    Man *m = new Man(20);
    
    printf("age:%d\n",m->getAge());
    return 0;
}

