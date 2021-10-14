// Copyright (c) 2021 Mikayla Barthelette All rights reserved
//
// Created by: Mikayla Barthelette
// Created on: Sept 2021
// This program will tell you if you can date grandma's grandchild

#include <iostream>
#include <string>


int main() {
    // this function determines if you can date her grandchild
    int userAge;
    std::string userInput;

    // input
    std::cout << "Please enter your age: ";
    std::cin >> userInput;

    // process
    try {
        userAge = std::stoi(userInput);
        if (userAge >= 25 && userAge <= 40) {
            std::cout << "You are accepted to date my grandchild.";
        } else {
            std::cout << "You are not the right age.";
        }
    } catch (std::invalid_argument) {
        std::cout << userInput << " is not valid input.";
    }

    // output
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::ends;
}
