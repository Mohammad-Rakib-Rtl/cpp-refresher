//
// Created by user on 10/18/2025.
//rolling dice problem


#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>


using namespace std;

int main(){

    const short minValue = 1;
    const short maxValue = 6;

    // short a;
    // short b;

    srand(time(0));
    short a = (rand() % (maxValue - minValue + 1)) + minValue;
    short b = (rand() % (maxValue - minValue + 1)) + minValue;

    cout << a << " " << b;

    return 0;

}