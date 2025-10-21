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

    string aName, bName, cName;

    string myArray[4] = {};

    cout << "Enter first user name: " << endl;
    // getline(cin, aName);
    getline(cin, myArray[0]);

    cout << "Enter second user name: " << endl;
    // getline(cin, bName);
    getline(cin, myArray[1]);
    cout << "Enter third user name: " << endl;
    // getline(cin, cName);
    getline(cin, myArray[2]);


    // myArray[0] = aName;
    // myArray[1] = bName;
    // myArray[2] = cName;

    cout << myArray[0] << endl;
    cout << myArray[2] << endl;
    cout << myArray[1] << endl;

    return 0;

}