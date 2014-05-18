//
//  main.cpp
//  L16String
//
//  Created by plter on 14-2-27.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, const char * argv[])
{

    string str;
    str+="Hello ";
    str+="World";
    // insert code here...
    std::cout << str<<"\n";
    
    
    stringstream ss;
    ss<<"Hello ";
    ss<<200;
    ss<<" ";
    ss<<2.5;
    ss<<"Hello "<<"jikexueyuan "<<1000;
    
    cout<<ss.str()<<"\n";
    
    
    return 0;
}

