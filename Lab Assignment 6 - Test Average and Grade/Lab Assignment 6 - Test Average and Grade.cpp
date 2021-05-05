// Lab Assignment 6 - Test Average and Grade.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Author: Derrick Li
// Date Created: 23 March 2021
// Purpose: Write a program that asks the user to enter five test scores. The program should display a letter grade
// for each scoreand the average test score. Design the following functions in the program:
// calcAverage—This function should accept five test scores as argumentsand return the average of the scores.
// determineGrade—This function should accept a test score as an argument and return a letter grade for the score(as a String), based on the following grading scale:
// A: 90 - 100 , B: 80 - 89 , C: 70 - 79 , D: 60-69 , F: Below 60

#include <iostream>
#include <string>
using namespace std;

// A function used to combine the scores given and returns the average value of the five scores.
double calcAverage(int t1, int t2, int t3, int t4, int t5) {
    double avg;
    avg = (t1 + t2 + t3 + t4 + t5) / 5;
    return avg;
}

// Uses a function that receives a double and uses a decision structure to determine the letter grade to be returned as a string.
string determineGrade(double grade) {

    if (grade < 60) {
        return "F";
    }
    else if (grade < 70) {
        return "D";
    }
    else if (grade < 80) {
        return "C";
    }
    else if (grade < 90) {
        return "B";
    }
    else if (grade <= 100) {
        return "A";
    }
    else {
        return "Value not acceptable";
    }
}

int main() {
    // Declares the double averageScore, an integer array gradeArray to hold the value of five scores, and a string averagrGrade to hold the average grade letter.
    double averageScore;
    int gradeArray[5];
    string averageGrade;

    // Uses a for-loop to get five scores from the user and inputs them into a slot in gradeArray depending on the for-loops current value.
    for (int i = 0; i < 5; i++) {
        std::cout << "Enter a test score: ";
        std::cin >> gradeArray[i];
    }

    // Uses a for-loop to get a letter grade for each of the score values and outputs their letter grades.
    for (int j = 0; j < 5; j++) {
        string gradeStr = determineGrade(gradeArray[j]);
        std::cout << "Grade " << j << " is: " << gradeStr << "\n";
    }

    // The variables averageScore and averageGrade are determined using the calcAverage and determienGrade functions.
    averageScore = calcAverage(gradeArray[0], gradeArray[1], gradeArray[2], gradeArray[3], gradeArray[4]);
    averageGrade = determineGrade(averageScore);

    // Outputs the average score and the average grade of the five scores.
    std::cout << "The average score is: " << averageScore << "\nThe average grade is: " << averageGrade;
}