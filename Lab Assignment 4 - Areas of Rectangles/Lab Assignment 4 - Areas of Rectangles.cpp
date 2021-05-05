// Lab Assignment 4 - Areas of Rectangles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Author: Derrick Li
// Date Created: 10 March 2021
// Purpose: The area of a rectangle is the rectangle’s length times its width. 
// Design a program that asks for the length and width of two rectangles.The program should tell the user which rectangle has the greater area, or whether the areas are the same.

#include <iostream>
using namespace std;

int main()
{
    // Declares variables for length1,length2,width1,and width2.
    int length1, length2, width1, width2;

    // Asks the user to input the lengths and widths of the rectangles.
    std::cout << "Enter the length of the first rectangle: ";
    std::cin >> length1;
    std::cout << "Enter the width of the first rectangle: ";
    std::cin >> width1;
    std::cout << "Enter the length of the second rectangle: ";
    std::cin >> length2;
    std::cout << "Enter the width of the second rectangle: ";
    std::cin >> width2;

    // Uses a decision structure to determine if one rectangle is larger than the other or if both are equal in area.
    if ((length1 * width1) > (length2 * width2)) {
        std::cout << "The first rectangle is larger than the second.";
    }
    else if ((length1 * width1) < (length2 * width2)) {
        std::cout << "The first rectangle is smaller than the second.";
    }
    else {
        std::cout << "The area of both rectangles are equal.";
    }
}