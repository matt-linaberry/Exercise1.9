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
    
    int numToPrint = 10;
    std::cout<< "Counting down from 10 to 0!" << std::endl;
    while (numToPrint >= 0) {
        std::cout << numToPrint << std::endl;
        numToPrint--;
    }
    
    std::cout << "Tell me two numbers: " << std::endl;
    int firstNum, secondNum;
    std::cin >> firstNum >> secondNum;
    if (firstNum < secondNum) {
        while (firstNum <= secondNum) {
            std::cout << firstNum << std::endl;
            firstNum++;
        }
    }
    else {
        while (secondNum <= firstNum) {
            std::cout << secondNum << std::endl;
            secondNum++;
        }
    }
    return 0;
}
