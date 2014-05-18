//
//  main.cpp
//  L17FileSystem
//
//  Created by plter on 14-2-27.
//  Copyright (c) 2014年 plter. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, const char * argv[])
{
    
//    ofstream of("data.txt");
//    of<<"Hello CPP\n";
//    of.close();
    
    ifstream inf("data.txt");
    
    stringbuf sb;
    inf>>&sb;
    
//    char c;
//    inf>>c;
    

    // insert code here...
    std::cout << sb.str() <<"\n";
    return 0;
}

