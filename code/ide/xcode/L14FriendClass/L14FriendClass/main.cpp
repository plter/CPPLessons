//
//  main.cpp
//  L14FriendClass
//
//  Created by plter on 14-2-27.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <iostream>


class A {
    friend class B;
    
private:
    int num;
    
public:
    A(){
        num = 10;
    }
};


class B{
    
public:
    B(){
        A a;
        printf("%d\n",a.num);
        
//        printf("%d\n",num);
    }
};




int main(int argc, const char * argv[])
{

    B b;
    
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

