//
//  main.cpp
//  L01OOP
//
//  Created by plter on 14-2-26.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <iostream>
#include "People.h"

//class People {
//    
//public:
//    void sayHello(){
//        printf("Hello CPP\n");
//    }
//};

int main(int argc, const char * argv[])
{

    People *p = new People();
    p->sayHello();
    delete p;
    
    return 0;
}

