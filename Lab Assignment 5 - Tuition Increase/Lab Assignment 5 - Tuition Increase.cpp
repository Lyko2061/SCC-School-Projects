// Lab Assignment 5 - Tuition Increase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Author: Derrick Li
// Date Created: 17 March 2021
// Purpose: At one college, the tuition for a full-time student is $6,000 per semester. It has been announced that the tuition will increase 
// by 2 percent each year for the next five years.Design a program with a loop that displays the projected semester tuition amount for the next five years.

#include <iostream>

int main()
{
	// Declares tutionCost at $6000
	double tuitionCost = 6000;

	// Uses a for-loop to repeat the output and calculation of the cost of tuition 5 times.
	for (int i = 1; i <= 5; i++) {
		std::cout << "The tuition is: $" << tuitionCost << " per semester in year " << i << "\n";
		tuitionCost *= 1.02;
	}
}

