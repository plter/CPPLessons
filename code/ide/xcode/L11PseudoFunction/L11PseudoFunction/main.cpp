//
//  main.cpp
//  L11PseudoFunction
//
//  Created by plter on 14-2-27.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <iostream>

void hello(){
    printf("hello\n");
}

class Hello {
    
public:
    void operator()(){
        printf("Hello CPP\n");
    }
};


int main(int argc, const char * argv[])
{
    
//    hello();
    
    Hello h;
    h();

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

