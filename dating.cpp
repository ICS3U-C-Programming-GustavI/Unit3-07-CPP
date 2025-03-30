// Copyright 2025 (c) All rights reserved
// Created by: Gustav I
// Created on: March 24, 2025
// This program executes the dating game.

#include <iostream>

int main() {
    int age;

    // Ask for user input
    std::cout << "Enter your age: " << std::endl;

    // Loop to get a valid age input
    while (true) {
        if (std::cin >> age) {
            // Check if the age is within a valid range (0-120).
            if (age >= 0 && age <= 120) {
                break;  // Valid input, exit the loop
            } else {
                std::cout << "Please enter a valid age /n" << std::endl;
                std::cout << "between 0 and 120:" << std::endl;
            }
        } else {
            // Invalid input
            std::cout << "Invalid input!" << std::endl;
            std::cout << "Please retry and enter a valid number." << std::endl;
            std::cin.clear();  // Reset the input stream in case of an error
            return 0;
        }
    }

    // Check the age criteria for dating using AND
    if (age > 25 && age < 40) {  // AND operator used to check both conditions
        std::cout << "You can date their grandchild!" << std::endl;
    } else {
        std::cout << "Sorry, you cannot date their grandchild." << std::endl;
    }

    return 0;
}
