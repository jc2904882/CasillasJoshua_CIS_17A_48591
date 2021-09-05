/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on September 4, 2021, 6:22 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Variables
    float F,
          C;

    // Ask user Celsius Temp
    cout << "\nEnter the Celsius Temp: ";
    cin >> C;

    // Calculate Fahrenheit
    F = ((9.0 / 5.0) * C) + 32;

    // Display Fahrenheit
    cout << setprecision(1) << fixed << right << endl;
    cout << "Celsius    Temp = " << setw(6) << C << endl;
    cout << "Fahrenheit Temp = " << setw(6) << F << endl;
    cout << endl;

    return 0;
}

