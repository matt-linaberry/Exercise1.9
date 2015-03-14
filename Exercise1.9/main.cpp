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
    int sum = 0;
    for (int num = 50; num <= 100; num++) {
        sum += num;
    }
    std::cout<< "The sum of 50 to 100 inclusively is " << sum << std::endl;
    
    std::cout<< "Counting down from 10 to 0!" << std::endl;
    for (int numToPrint = 10; numToPrint >= 0; numToPrint--) {
        std::cout << numToPrint << std::endl;
    }
    
    std::cout << "Tell me two numbers: " << std::endl;
    int firstNum, secondNum;
    std::cin >> firstNum >> secondNum;
    if (firstNum < secondNum) {
        for (;firstNum <= secondNum;firstNum++) {
            std::cout << firstNum << std::endl;
        }
    }
    else {
        for ( ;secondNum <= firstNum; secondNum++) {
            std::cout << secondNum << std::endl;
        }
    }
    return 0;
}
