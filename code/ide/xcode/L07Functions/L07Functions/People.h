//
//  People.h
//  L01OOP
//
//  Created by plter on 14-2-26.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#ifndef __L01OOP__People__
#define __L01OOP__People__

#include <iostream>


class People {
    
private:
    int age;
    int sex;
    
public:
    People();
    People(int age,int sex);
    int getAge();
    int getSex();
    virtual void sayHello();
    virtual void eat()=0;
};


#endif /* defined(__L01OOP__People__) */
