// Copyright (c) 2019 Joseph Palermo All rights reserved.
//
// Created by: Joseph Palermo
// Created on: October 2019
// This program adds positive integers

#include <iostream>


int main() {
    // This function adds positive integers

    // variables
    int counter;
    int addingNumber;
    int answer = 0;
    int numberChosen;

    // input
    std::cout << "" << std::endl;
    std::cout << "Enter the amount of numbers you want to add: ";
    std::cin >> addingNumber;
    std::cout << "" << std::endl;

    // process
    for (counter = 0; counter < addingNumber; counter++) {
        std::cout << "Enter a number to be added:" << std::endl;
        std::cin >> numberChosen;
        if (numberChosen < 0) {
            continue;
        }
        answer = answer + numberChosen;

    // output
    std::cout << "" << std::endl;
    std::cout << "The sum of all numbers is...... " << answer << std::endl;
    std::cout << "" << std::endl;
    }
}
