//
// Created by roman on 10/11/2025.
//
#include <iostream>

using namespace std;

int main(){
//    int file_size = 100, counter = 0;
//    int file_size = 100;
//    int counter = 0;
    double sales = 9.99;

    //constant
    const double pi = 3.1416;

//    pi = 3.12;

//Naming conventions

    int file_size; //Snake Case
    int FileSize; // Pascal Case //will use for classes
    int fileSize; //Camel Case //in this tutorial author will use this for declaring variables and cosnstants
    int iFileSize; //Hungarian Notation

    //Mathematical Expressions
//    double x = 10;
//    int y = 3;
//    double z = x / y;

//    std::cout << "x = " << x;
//    std::cout << x;


//    std::cout << z << endl;

    int w = 10;
    int x1 = w++;
//    w = w + 1;
//    w++;
//    ++w;
//    int y1 = ++w;

//    cout << "-----------------" << endl;
//    cout << w << "  " << x1 << endl;
//    cout << w << "  " << y1 << endl;
//    cout << "-----------------" << endl;
//
//    std::cout << "Hello World" << std::endl;
//    std::cout << file_size << std::endl;
//    std::cout << sales << endl;

//    cout << "-------Order/Priorities of operators----------" << endl;
    // () //we can change the order by using parenthesis
    double zx = (1 + 2) * 3;
    // * and /
    // + and -
    double xz = 1 + 2 * 3;
//
//    cout << xz << endl;
//    cout << zx << endl;



    // Writing output to the console
    int x = 10;
    int y = 101;
    cout << "x = " << x << endl
        << "y = " << y;

    return 0;

}
