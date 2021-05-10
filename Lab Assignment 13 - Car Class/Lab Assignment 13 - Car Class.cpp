// Lab Assignment 13 - Car Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Author: Derrick Li
// Date Created: 8 May 2021
// Purpose: Design a class named Car that has the following fields:
//   -yearModel: The year Model field is an Integer that holds the car’s year model.
//   -Make: The make field references a String that holds the make of the car.
//   -Speed: The speed field is an Integer that holds the car’s current speed.
// In addition, the class should have the following constructor and other methods:
//   -Constructor: The constructor should accept the car’s year model and make as arguments.
//      =These values should be assigned to the object’s yearModel and make fields. The constructor also assign 0 to the speed field.
//   -Accessors: Design appropriate accessor methods to get the values stored in an object’ yearModel, make, and speed fields.
//   -Accelerate: The accelerate method should add 5 to the speed field each time it is called.
//   -Brake: The brake method should subtract 5 from the speed field each time it is called.
// Next, design a program that creates a Car object, and then calls the accelerate method five times.
// After each call to the accelerate method, get the current speed of the carand display it.
// Then call the brake method five times. After each call to the brake method, get the current of the carand display it.

#include <iostream>
#include<string>
using namespace std;


//Declares the class Car which will be the template for all cars being declared in main()
class Car {
//Declares the car's make,yearModel, and speed privately so it can't be directly accessed.
private:
    string make;
    int yearModel, speed;

public:
    //Constructor for class Car; the user inputs the car's make and model with a default speed of 0 which then is transfered over to its private counterpart.
    Car(string carMake, int carYrModel) {
        make = carMake;
        yearModel = carYrModel;
        speed = 0;
    }

    //Accessors
    //Returns the car's year model when called.
    int getYearModel() {
        return yearModel;
    }

    //Returns the car's current speed when called.
    int getSpeed() {
        return speed;
    }

    //Returns the car's make when called.
    string getMake() {
        return make;
    }

    //Modifiers
    //Accelerates the car by 5 when called.
    void accelerate() {
        speed += 5;
    }

    //Decelerates the car by 5 when called.
    void brake() {
        speed -= 5;
    }
};

int main() {

    //Initializes string make and int model in main to store the user's input for their car year and model.
    string make;
    int model;
    std::cout << "Enter the make of the car: ";
    std::cin >> make;
    std::cout << "Enter car model: ";
    std::cin >> model;

    //Creates a Car class called newCar.
    Car newCar(make, model);

    //Tells the user that the car will accelerate five times and prints the car's speed each time it accelerates.
    std::cout << "Accelerating the " << newCar.getMake() << " " << newCar.getYearModel() << " five times.";
    for (int i = 0; i < 5; i++) {
        newCar.accelerate();
        std::cout << "\nThe speed of the car is: " << newCar.getSpeed();
    }

    //Tells the user that the car will brake five timesand prints he car's speed each time it decelerates
    std::cout << "\nBraking the " << newCar.getMake() << " " << newCar.getYearModel() << " five times.";

    for (int j = 0; j < 5; j++) {
        newCar.brake();
        std::cout << "\nThe speed of the car is: " << newCar.getSpeed();
    }
}

