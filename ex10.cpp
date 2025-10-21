//
// Created by roman on 10/21/2025.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <limits>



using namespace std;

int main(){

    int x = 10;
    int y = 3;

    double z = static_cast<double>(x) / y;
//    double z = x / static_cast<double>(y);
//    double z = x / double(y); // not recommended
//    double z = double(x) / y;
//    double z = x / y;

    cout << z; // if i typecast here never work properly


    return 0;

}