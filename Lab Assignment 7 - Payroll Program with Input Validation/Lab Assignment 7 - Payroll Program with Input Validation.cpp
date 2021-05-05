// Lab Assignment 7 - Payroll Program with Input Validation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Author: Derrick Li
// Date Created: 28 March 2021
// Purpose: Design a payroll program that prompts the user to enter an employee’s hourly pay rate and the
// number of hours worked0 .Validate the user’s input so that only pay rates in the range of $7.50 through
// $18.25 and hours in the range of 0 through 40 are accepted.The program should display the employee’s gross pay.

#include <iostream>

// A function that will return true if the hourly pay rate is within the boundaries of 7.50 and 18.25 an false if it's not within the boundaries.
bool hourlyRatePay(double ratePay) {
    if ((ratePay >= 7.50) && (ratePay <= 18.25)) {
        return true;
    }
    else {
        return false;
    }
}

// A function that returns true if the hours worked is in between 0 to 70 and false if not.
bool hoursWorked(int hours) {
    if ((hours >= 0) && (hours <= 70)) {
        return true;
    }
    return false;
}

int main()
{
    // Declares the hours worked per week and the hourly pay rate.
    double ratePay;
    int hoursPerWeek;

    // Asks the user to input their hourly pay rate and their hours worked in a week.
    std::cout << "Enter your hourly pay rate: ";
    std::cin >> ratePay;
    std::cout << "Enter your how many hours you work per week: ";
    std::cin >> hoursPerWeek;

    // Uses a decision decision structure to determine output their gross pay if both the pay rate and the hours worked are within their boundaries
    // or output the error if one of the two do not meet their requirements.
    if (hourlyRatePay(ratePay) && (hoursWorked(hoursPerWeek)))
    {
        std::cout << "Your gross pay is " << (hoursPerWeek * ratePay);
    }
    else if (hourlyRatePay(ratePay) && !(hoursWorked(hoursPerWeek)))
    {
        std::cout << "There is an error with your hours per week.";
    }
    else if (!hourlyRatePay(ratePay) && (hoursWorked(hoursPerWeek)))
    {
        std::cout << "There is an error with your pay.";
    }
    else {
        std::cout << "Invalid inputs.";
    }
}