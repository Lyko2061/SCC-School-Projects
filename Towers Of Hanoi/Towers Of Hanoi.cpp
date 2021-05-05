// Towers Of Hanoi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void towerOfHanoi(int n, string primPeg, string endPeg, string tempPeg) {
	if (n == 1) {
		std::cout << "\nMoved disk from peg " << primPeg << " to " << endPeg;
	}
	else {
		//Move the disks above the bottom peg to a temporary peg.
		towerOfHanoi(n - 1, primPeg, tempPeg, endPeg);
		//Move the bottom disk to the end peg.
		towerOfHanoi(1, primPeg, endPeg, tempPeg);
		//Moves the disks in temporary peg to the end peg.
		towerOfHanoi(n - 1, tempPeg, endPeg, primPeg);
	}
}

int main() {
	int disks;
	std::cout << "Enter the amount of disks you wish to use: ";
	std::cin >> disks;
	towerOfHanoi(disks, "1", "2", "3");
}


