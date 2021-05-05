// Lab Assignment 12 - Most Frequent Character.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Author: Derrick Li
// Date Created: 21 April 2021
// Purpose: Design a program that prompts the user to enter a string, and displays the character that appears most frequently in the list.

#include <iostream>
#include <string>
using namespace std;


int main()
{
    //Declares string str to store user's input.
    string str ="";
    std::cout << "Enter a sentence: ";

    //User's input has been stored in str
    std::getline(std::cin, str);

    //Initializes integer count to store the amount of times the highest mentioned letter has been used and character letter to store the first letter.
    int count = 0;
    char letter=str[0];

    //Initializes a loop that counts how many times the first letter has been found.
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == letter) {
            count++;
        }
    }

    //Declaring temporary values tempCount and tempLetter to house temporary letters that will be used to be compared to the current highest values count and letter.
    int tempCount = 0;
    char tempLetter;

    //Nested loop
    //Outer loop will repeat until all letters in the string have been used.

    for (int k = 1; k < str.length(); k++) {
        //Sets tempLetter to be equal to the current letter being checked.
        tempLetter = str[k];

        //Resets tempCounts value
        tempCount = 0;

        //Inner loop checks the current letter against the rest of the string.
        for (int j = 0; j < str.length(); j++) {
            if (tempLetter==(str[j])) {

                //If the current letter is equal, tempCount will be increased by one.
                tempCount++;
            }
        }

        //After the inner loop has finished, it will check if the current value of tempCount is greater than the value of count,
        if (tempCount > count) {

            //Replaces count with the current tempCount and letter with the current tempLetter as they have higher appearance rate.
            count = tempCount;
            letter = tempLetter;
        }
    }

    //Prints out the most mentioned letter and how often it has been found.
    std::cout << "\n'" << letter << "' has been said " << count << " times.";
}