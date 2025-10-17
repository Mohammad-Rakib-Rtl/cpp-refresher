//
// Created by user on 10/17/2025.
// Write a Program to calculate the area of a circle

#include <iostream>
#include <cmath>

using namespace std;
int main() {

    const double pi = 3.14;

    double r;
    cout << "Enter a radius: ";
    cin >> r;

    double area = pi * pow(r, 2);
    cout << area << endl;


    return 0;
}