// Lab Assignment 9 -  Sorted Golf Scores.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Author: Derrick Li
// Date Created: 5 April 2021
// Purpose: Design a program that asks the user to enter 10 golf scores. The scores should be stored in an Integer array.
// Sort the array in ascending orderand display its contents.

#include <iostream>

int main()
{

	int golfScores[10];
	for (int i = 0; i < (sizeof(golfScores) / sizeof(golfScores[0])); i++) {
		std::cout << "\nEnter golf score #" << i + 1 << ": ";
		std::cin >> golfScores[i];
	}

	//Initializes a temporary variable with the first score in golfScores.
	int lowerScore = golfScores[0];

	//Nested loop
	//Outer loop will repeat the process as many times as there are integers within golfScores.
	for (int k = (sizeof(golfScores) / sizeof(golfScores[0])); k >= 0; k--) {

		//Inner loop uses an IF STATEMENT to compare the current integer with the previous one in the array.
		for (int j = 1; j < (sizeof(golfScores) / sizeof(golfScores[0])); j++) {

			//If the current score is lower than the previous one, they will swap places.
			if (golfScores[j] < golfScores[j - 1]) {
				lowerScore = golfScores[j];
				golfScores[j] = golfScores[j - 1];
				golfScores[j - 1] = lowerScore;
			}
		}
	}

	//Prints the golfScores in order from least to greatest.
	for (int l = 0; l < (sizeof(golfScores) / sizeof(golfScores[0])); l++) {
		std::cout << golfScores[l] << "\n";
	}
}
