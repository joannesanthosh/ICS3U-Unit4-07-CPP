// Copyright (c) 2021 Joanne Santhosh All rights reserved

// Created by: Joanne Santhosh
// Created on: Nov 2022
// This program shows every number from 1000 to 2000

#include <iostream>

int main() {
    // This function shows every number from 1000 to 2000

    int counter = 1000;

    // Process and Output

    for (counter = 1000; counter <= 2000; counter++) {
        ((counter % 5) == 4) ? std::cout << counter << "\n"
                             : std::cout << counter << " ";
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
