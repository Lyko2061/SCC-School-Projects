// Lab Assignment 8 - Rainfall Statistics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Author: Derrick Li
// Date Created: 1 April 2021
// Purpose: Design a program that lets the user enter the total rainfall for each of 12 months into an array. 
// The program should calculate and display the total rainfall for the year, the average monthly rainfall, and
// the months with the highestand lowest amounts.

#include <iostream>
using namespace std;

//Function that calculates the total rainfall of the year based off the data the user inputted into the array in main().

int totalRainfall(int rainfallPerMonth[]) {
    //Holds a temp value used to store the total rainfall from all the months the user inputted.
    int sum = 0;
    for (int k = 0; k < 12; k++) {
        sum += rainfallPerMonth[k];
    }
    //Returns the total rainfall of the year.
    return sum;
}

//Function that calculates the month with the highest amount of rain.
int highestRainfall(int months[]){
    //Declares two variables: highMonth which stores the month with the highest rainfall, and highRainfall which will be used to compare the rainfall between months.
    int highMonth = 0, highRainfall = months[0];

    //Initializes a loop which will compare the rainfall between months.
    for (int j = 1; j < 12; j++) {
        
        //Checks if the current month's rainfall is higher than the highest one recorded. If it is, it will overwrite highRainfall and hihgMonth with the current values. 
        if (months[j] > highRainfall) {
            highRainfall = months[j];
            highMonth = j;
        }
    }
    return highMonth;
}

//Function that calculates the month with the lowest amount of rain.
int lowestRainfall(int months[]) {
    //Declares two variables: lowMonth which stores the month with the lowest rainfall, and lowRainfall which will be used to compare the rainfall between months.
    int lowMonth = 0, lowRainfall = months[0];
    
    //Initializes a loop which will compare the rainfall between months.
    for (int m = 1; m < 12; m++) {
        
        //Checks if the current month's rainfall is lower than the highest one recorded. If it is, it will overwrite lowRainfall and lowMonth with the current values.
        if (months[m] < lowRainfall) {
            lowRainfall = months[m];
            lowMonth = m;
        }
    }
    return lowMonth;
}


//Main function where everything occurs
int main()
{
    //Declares int calendar to store the rainfall for each month and string calendarNames to hold the name of the month, 
    //totRain for the total rainfall that year, and double avgRain for the average rainfall that year.
    int calendar [12], totRain;
    double avgRain;
    string calendarNames[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};

    //Runs a loop that asks the user to input the rainfall in the given month and stores it in the calendar array.
    for (int i = 0; i < 12; i++) {
        std::cout << "Enter the rainfall for " << calendarNames[i]<< ": " << "\n";
        std::cin >> calendar[i];
    }

    //Passes the user inputted data to function totalRain() to calculate the total rain of that year.
    totRain = totalRainfall(calendar);

    //Divides the total rain by the amount of months to get the average rainfall of the year.
    avgRain = ((double)totRain / 12);

    std::cout << "The total rainfall that year was: " << totRain << ".\n";
    std::cout << "The average rainfall that year was: " << avgRain << " rainy days per month.\n";
    std::cout << "The month with the highest rainfall that year was: " << calendarNames[highestRainfall(calendar)]<<"\n";
    std::cout << "The month with the lowest rainfall that year was: " << calendarNames[lowestRainfall(calendar)];
}
