// Copyright (c) 2021 Crestel Ong All rights reserved
//
// Created by: Crestel Ong
// Created on: September 2021
// this is the days of the week program

#include <iostream>
#include <string>

int main() {
    // this function displays the day a number entered represents

    // telling them what they are doing
    std::cout << "Everyday has a corresponding number." << std::endl;
    std::cout << "For example, 1 is Sunday." << std::endl;
    std::cout << "" << std::endl;

    // declaring
    std::string userInputAsString;
    float userInputAsFloat;
    int userInputAsInteger;

    // input
    std::cout << "Enter a number of a day of the week: ";
    std::cin >> userInputAsString;

    // process and output
    try {
        // convert string to integer and float
        userInputAsInteger = std::stoi(userInputAsString);
        userInputAsFloat = std::stof(userInputAsString);

        // process and output
        if (userInputAsInteger >= 0) {
            if (userInputAsFloat == userInputAsInteger) {
                switch (userInputAsInteger) {
        case 1 :
            std::cout << "Sunday" << std::endl;
            break;
        case 2 :
            std::cout << "Monday" << std::endl;
            break;
        case 3 :
            std::cout << "Tuesday" << std::endl;
            break;
        case 4 :
            std::cout << "Wednesday" << std::endl;
            break;
        case 5 :
            std::cout << "Thursday" << std::endl;
            break;
        case 6 :
            std::cout << "Friday" << std::endl;
            break;
        case 7 :
            std::cout << "Saturday" << std::endl;
            break;
        default :
            std::cout << "Invalid number." << std::endl;
    }
            } else {
                std::cout << "You did not enter an integer." << std::endl;
            }
        } else {
            std::cout << "You did not enter a positive integer." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << userInputAsString << " is not an integer."
        << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
