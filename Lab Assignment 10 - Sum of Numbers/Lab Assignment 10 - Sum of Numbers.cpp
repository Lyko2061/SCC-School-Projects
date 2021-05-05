// Lab Assignment 10 - Sum of Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Author: Derrick Li
// Date Created: 12 April 2021
// Purpose: Assume that a file containing a series of integers is named numbers.dat and exists on the computer’s disk.
// Design a program that reads all of the numbers stored in the file and calculates their total.

#include <iostream>

//Adds the #include directive fstream and the namespace std
#include <fstream>
using namespace std;

int main() {
	//Declares the input files tream variable inputFile
	ifstream inputFile;
	
	//Opens/imports the file numbers.dat 
	inputFile.open("numbers.dat");

	//Declares integer sum with value 0 and currentValue which will be used to hold the sum of the integers in numbers.dat
	int sum = 0, currentValue;

	while (!inputFile.eof()) {
		//Transfers over the integers from ifstream inputFile over to integer variable sum.
		inputFile >> currentValue;
		sum += currentValue;

		//Displays the new sum after the integer has been added.
		std::cout << sum << "\n";
	}

	//Closes numbers.dat
	inputFile.close();

	std::cout << "\n The sum of all integers in numbers.dat is :" << sum;
 }