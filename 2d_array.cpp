// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Joey Marcotte
// Created on: Dec 2019
// This program uses a 2D array

#include <time.h>
#include <iostream>


template <int rows, int cols>
int averageOfNumbers(int (&a2DList)[rows][cols], int numberRows, int columns) {
    // this function finds average of all the elements in a 2D array

    int total = 0;

    for (size_t rowElement = 0; rowElement < rows; ++rowElement) {
        for (size_t columnElement = 0; columnElement < cols; ++columnElement)
            total += a2DList[rowElement][columnElement];
    }

    total = total/(numberRows*columns);

    return total;
}


int main() {
    // this function uses a 2D array

    int aSingleRandomNumber = 0;
    int average = 0;
    const int rows = 1;
    const int columns = 1;
    int a2DArray[rows][columns];

    srand(time(NULL));
    //   In C++ you can't define array's size using variable.
    //   this is why you see const int rows = 2; above,
    //   so the size of the array can never change

    for (int rowElement = 0; rowElement < rows; rowElement++) {
        for (int columnElement = 0; columnElement < columns; columnElement++) {
            aSingleRandomNumber = (rand() % 50) + 1;
            a2DArray[rowElement][columnElement] = aSingleRandomNumber;
            std::cout << aSingleRandomNumber << ", ";
        }
        std::cout << std::endl;
    }

    average = averageOfNumbers(a2DArray, rows, columns);
    std::cout << "The sum of all the numbers is: " << average << std::endl;
}
