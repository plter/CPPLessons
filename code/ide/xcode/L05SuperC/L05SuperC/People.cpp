//
//  People.cpp
//  L01OOP
//
//  Created by plter on 14-2-26.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include "People.h"

People::People(){
    this->age = 10;
    this->sex = 1;
}


People::People(int age,int sex){
    this->age = age;
    this->sex = sex;
}

int People::getAge(){
    return this->age;
}

int People::getSex(){
    return this->sex;
}


void People::sayHello(){
    printf("Hello CPP\n");
}