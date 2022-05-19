// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: May, 17th, 2022
// This program generates a 10 random number between 0 and 100. It then uses a
// loop to display what position the random number is at & calculates the a
// average & displays it.
#include <iostream>
#include <random>


int main() {
    // declare constants
    const int MAX_SIZE = 10;
    const int MAX_NUM = 100;
    const int MIN_NUM = 0;

    // declare variables
    int counter = 0;
    int sum = 0;
    float average;

    // declare an array, assign it to a value
    int arrayOfInt[MAX_SIZE];

    // displays random number generated at whichever position it is at &
    // displays it.
    for (counter = 0; counter < MAX_SIZE; counter++) {
        // generate random number
        int randomInt;

        std::random_device rseed;

        std::mt19937 rgen(rseed());  // mersenne_twister

        std::uniform_int_distribution<int> idist(0, 100);  // [0,100]

        randomInt = idist(rgen);


        // display the position it is at
        arrayOfInt[counter] = randomInt;
        sum += arrayOfInt[counter];
        std::cout << arrayOfInt[counter] << " is added to position at "
                  << counter;
        std::cout << std::endl;
    }

    // calculates & displays the average sum
    for (counter = 0; counter < 1; counter++) {
        average = sum / MAX_SIZE;
        std::cout << std::endl;
        std::cout << "The average sum is: " << average;
    }
}

