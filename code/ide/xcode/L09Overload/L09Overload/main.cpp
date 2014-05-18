//
//  main.cpp
//  L09Overload
//
//  Created by plter on 14-2-27.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <iostream>


class Hello {
    
public:
    void sayHello(){
        printf("Hello jikexueyuan\n");
    }
    
//    void sayHello(char *name){
//        printf("Hello %s\n",name);
//    }
    
    void sayHello(std::string name){
        std::string str="Hello ";
        str+=name;
        
        std::cout<<str<<"\n";
    }
};


int main(int argc, const char * argv[])
{

    Hello *h = new Hello();
    h->sayHello("ZhangSan");
//    std::string name = "ZhangSan";
//    h->sayHello((char*)name.c_str());
    
    
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

