//
// Created by user on 10/21/2025.
//


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>



using namespace std;

int main(){

    string Street;
    cout << "Street: ";
    getline(cin, Street);

    string City;
    cout << "City: ";
    getline(cin, City);

    string State;
    cout << "State: ";
    getline(cin, State);

    string zipCode;
    cout << "Zip Code: ";
    // cin >> zipCode;
    getline(cin, zipCode);


    // cin >> Street >> City >> State >> ZipCode;

    cout << left << Street << endl
            << City << ", " << State << ", " << zipCode << endl;

    return 0;

}