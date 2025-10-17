//
// Created by user on 10/17/2025.
//

#include <iostream>


using namespace std;

int main() {

    double fahrenheit;
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;

    double toCelsius = (fahrenheit - 32) * 5 / 9;
    cout <<"Value of temperature fahrenheit to celsius is : " << toCelsius << " degree celsius." << endl;

    return 0;

}