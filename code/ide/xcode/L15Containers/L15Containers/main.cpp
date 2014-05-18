//
//  main.cpp
//  L15Containers
//
//  Created by plter on 14-2-27.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <iostream>
#include <list>
#include <string>
#include <map>

using namespace std;


int main(int argc, const char * argv[])
{
    
    std::list<std::string> l;
    l.push_back("Hello");
    l.push_back("jikexueyuan");
    
    for (std::list<std::string>::iterator it = l.begin(); it!=l.end(); it++) {
        std::cout<<*it<<"\n";
    }
    
    std::map<std::string, std::string> m;
//    m.insert(std::pair<string, string>("hello","Hello jikexueyuan"));
//    m.insert(pair<string, string>("name","ZhangSan"));
//    cout<<m.at("hello")<<"\n";
    
    m["name"] = "ZhangSan";
    
    cout<<m["name"]<<"\n";

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

