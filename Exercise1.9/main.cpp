//
//  main.cpp
//  Exercise1.9
//
//  Created by Matthew Linaberry on 3/14/15.
//  Copyright (c) 2015 Matthew Linaberry. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int num = 50, sum = 0;
    while (num <= 100) {
        sum += num;
        num++;
    }
    
    std::cout<< "The sum of 50 to 100 inclusively is " << sum << std::endl;
    return 0;
}
