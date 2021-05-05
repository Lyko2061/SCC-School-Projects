// Lab Assignment 11 - Geometry Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Author: Derrick Li
// Date Created: 17 April 2021
// Purpose: Create a program that calculates the area of a circle, rectangle, or triangle depending on the user's input.
// If the user enters 1, the program should ask for the radius of the circle and then display its area. 
// Use the following formula to calculate the circle’s area: area = pir^2
// Use 3.14159 for pi and the radius of the circle for r.
// If the user enters 2, the program should ask for the length and width of the rectangle, and then display the rectangle’s area.
// Use the following formula to calculate the rectangle’s area: area = length × width
// If the user enters 3, the program should ask for the length of the triangle’s baseand its height, and then display its area.
// Use the following formula to calculate the area of the triangle: area = base x height x 0.5

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;



//Calculates the area of a circle.
void areaCircle() {
    //Declares circleRadius and circleArea;
    double circleRadius = -1, circleArea;
    
    //Asks the user to input the radius of a circle for as long as it is less than 0.
    do {
        std::cout << "\nEnter the radious of the circle:";
        std::cin >> circleRadius;

        //Displays invalid radius since the radius entered is less than 0.
        if (circleRadius < 0) {
            std::cout << "Invalid radius";
        }
    }while (circleRadius < 0);

    circleArea = 3.14159 * pow(circleRadius,2);

    //Displays the area of a circle.
    std::cout << "The area of your circle is: " << circleArea;
}

//Calculates the area of a rectangle.
void areaRectangle() {
    double rectangleLength , rectangleWidth,rectangleArea;

    //Asks the user to input the length of a rectangle for as long as it is less than 0.
    do {
        std::cout << "\nEnter the length of the rectangle: ";
        std::cin >> rectangleLength;

        //Displays invalid length since the length entered is less than 0.
        if (rectangleLength < 0) {
            std::cout << "Invalid length";
        }
    } while (rectangleLength < 0);

    //Asks the user to input the width of a rectangle for as long as it is less than 0.
    do {
        std::cout << "\nEnter the width of the rectangle: ";
        std::cin >> rectangleWidth;
        if (rectangleWidth < 0) {
            
            //Displays invalid width since the width entered is less than 0.
            std::cout << "Invalid width";
        }
    } while (rectangleWidth < 0);
    
    rectangleArea = rectangleWidth * rectangleLength;

    //Displays the area of a rectangle.
    std::cout << "\nThe area of your rectangle is: " << rectangleArea;
}

//Calculates the area of a triangle.
void areaTriangle() {
    double triangleLength, triangleWidth, triangleArea;
    
    
    //Asks the user to input the length of a triangle for as long as it is less than 0.
    do {
        std::cout << "\nEnter the length of the triangle: ";
        std::cin >> triangleLength;

        //Displays invalid length since the length entered is less than 0.
        if (triangleLength < 0) {
            std::cout<<"Invalid length";
        }
    } while (triangleLength < 0);

    //Asks the user to input the width of a triangle for as long as it is less than 0.
    do {
        std::cout << "\nEnter the width of the triangle: ";
        std::cin >> triangleWidth;

        //Displays invalid width since the width entered is less than 0.
        if (triangleWidth < 0) {
            std::cout << "Invalid width";
        }
    } while (triangleWidth < 0);

    triangleArea = triangleWidth * triangleLength * 0.5;

    //Displays the area of a triangle.
    std::cout << "\nThe area of your triangle is: " << triangleArea;
}

int main()
{
    int choice;

    do {
        //Displays the options of Geometry Calculator before every decision until the user decides to quit.
        std::cout << "\n\n     Gemometry Calculator";
        std::cout << "\n1. Calculate the Area of a Circle";
        std::cout << "\n2. Calculate the Area of a Rectangle";
        std::cout << "\n3. Calculate the Area of a Triangle";
        std::cout << "\n4. Quit";
        std::cout << "\n\nEnter your choice (1-4):\n";
        std::cin >> choice;

        //If the choice is in between 1 and 4 it will be a valid input and the program will either quit or calculate the area of a circle, rectangle, or rectangle 
        if (choice >= 1 && choice <= 4) {
            if (choice == 1) {
                areaCircle();
            }
            else if (choice == 2) {
                areaRectangle();
            }
            else if (choice == 3) {
                areaTriangle();
            }
        }
        else{
            //If the input is not between 1 and 4 it will be an invalid input and will be asked to re-enter a new choice.
            std::cout << "\nInvalid selection";
        }
    } while (choice != 4);
}
