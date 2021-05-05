// Lab Assignment 3 - Automobile Cost.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Author: Derrick Li
// Date Created: 7 March 2021
// Purpose: Design a modular program that asks the user to enter the monthly costs for the following expenses incurred from operating 
// his or her automobile: loan payment, insurance, gas, oil, tires, and maintenance.
// The program should then display the total monthly cost of these expenses, and the total annual cost of these expenses.

#include <iostream>


// Function that outputs the monthly cost of all the resouces allocated to the automobile and calculates the monthly total and the annual total.
void calculator(double mLoan, double mInsurance, double mGas, double mOil, double mTires, double mMaintainanceCost) {
    std::cout << "\nMonthly loan: " << mLoan << "\nMonthly insurance cost: " << mInsurance << "\nMonthly gas cost: " << mGas << "\nMonthly oil cost: " << mOil << "\nMonthly tire cost: " << mTires << "\nMonthly maintainance cost: " << mMaintainanceCost;
    double total = mLoan + mInsurance + mGas + mOil + mTires + mMaintainanceCost;
    std::cout << "\n\nThe monthly total for all of your costs is: " << total;
    std::cout << "\nThe annual total for all of your costs is : " << 12 * total;
}
int main()
{
    // Declares double variables for loan,insurance,gas,oil,tires,and cost for maintainence
    double loan, insurance, gas, oil, tires, maintainanceCost;

    // Asks user to input their monthly costs.
    std::cout << "Enter your monthly loan cost: ";
    std::cin >> loan;
    std::cout << "Enter your monthly insurance cost: ";
    std::cin >> insurance;
    std::cout << "Enter your monthly gas cost: ";
    std::cin >> gas;
    std::cout << "Enter your monthly oil cost: ";
    std::cin >> oil;
    std::cout << "Enter your monthly tire cost: ";
    std::cin >> tires;
    std::cout << "Enter your monthly maintainance cost: ";
    std::cin >> maintainanceCost;

    // Calls the calculator function and inputs the values obtained from the user for their monthly costs.
    calculator(loan, insurance, gas, oil, tires, maintainanceCost);
}
