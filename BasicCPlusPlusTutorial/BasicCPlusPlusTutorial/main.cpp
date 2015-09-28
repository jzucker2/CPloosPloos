//
//  main.cpp
//  BasicCPlusPlusTutorial
//
//  Created by Jordan Zucker on 9/27/15.
//  Copyright © 2015 pubnub. All rights reserved.
//

#include <iostream>
#include "MyClass.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    // now start tutorial
    
    MyClass m;
    m.x = 10;
    m.y = 20;
    m.foo();
    
    return 0;
}
