// Copyright (c) 2022 Kent G All rights reserved.
// .
// Created by: Kent G
// Date : Dec 15, 2022
// This program prints the highest value of ten randomly
// generated numbers

#include <array>
#include <iostream>
using std::cout;

/*Defining this constant as a global variable because findMaxValue()
also needs it in the parameter definition.*/ 
const int MAX_ARRAY_SIZE = 10;

int findMaxValue(std::array<int, MAX_ARRAY_SIZE> arrayOfNum) {
    int greatestNum = -1;
    // Getting the size of the array outside the loop to save on memory.
    int arraySize = arrayOfNum.size();
    for (int i = 0; i < arraySize; i++) {
        /* Checking if the greatest number so far is bigger
        than the next one on the list.*/
        if (arrayOfNum[i] > greatestNum) {
                greatestNum = arrayOfNum[i];
            }
    }
    return greatestNum;
}

int main() {
    // Defining the variables
    int finalNum;
    int randomNum;
    const int MAX_NUM = 100;
    const int MIN_NUM = 0;
    // Defining  the array.
    std::array<int, MAX_ARRAY_SIZE> arrayOfInt;

    // Defining the seed.
    srand(time(NULL));

    for (int counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        /* Generating the random number and assigning 
        it to a position in the array.*/
        randomNum = (rand() % MAX_NUM + 1) + MIN_NUM;
        arrayOfInt[counter] = randomNum;
        // Displaying the contents of the list.
        cout << randomNum << " added at position " << counter << "\n";
    }
    /*Calling and passing the array to the function 
    that returns the greatest number.*/
    finalNum = findMaxValue(arrayOfInt);
    // Output
    cout << "The greatest number is: " << finalNum;
}
