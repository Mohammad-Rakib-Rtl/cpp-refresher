//
// Created by roman on 10/20/2025.
//


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>



using namespace std;

int main(){


    cout << left << setw(15) << "Course" << setw(10) << "Students" << endl
            << setw(15) << "C++" << setw(10) << right << 100 << left << endl
//    cout << right;
//    cout << setw(9) << 100 << endl;
               << setw(15) << "JavaScript" << setw(10) << right << 50 << left << endl;



    return 0;

}
