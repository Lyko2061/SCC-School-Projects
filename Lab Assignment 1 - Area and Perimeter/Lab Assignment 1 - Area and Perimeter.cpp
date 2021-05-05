// Lab Assignment 1 - Area and Perimeter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Author: Derrick Li 
// Date Created 27 February 2021
// Purpose: Using C++, write a program that finds the area and the perimeter of a rectangle from a user. 
// A = LW
// P = 2 (L + W)
// The program must ask for the lengthand the width from the user.The output must display both the areaand the perimeter.
#include <iostream>

int main()
{
    // Declares doubles for length, width, area, and perimeter. 
    double length, width, area, perimeter;

    // Asks user to input the length and width of the rectangle. 
    std::cout << "Enter a length: ";
    std::cin >> length;
    std::cout << "Enter a width: ";
    std::cin >> width;

    // Calculates the area and perimeter of the rectangle using the inputs given by the user. 
    area = length * width;
    perimeter = 2 * (length + width);

    // Prints the area and perimeter of the rectangle using the calculations of area and perimeter. 
    std::cout << "The area of " << length << " by " << width << " is: " << area;
    std::cout << "\nThe perimeter of " << length << " by " << width << " is: " << perimeter;
}