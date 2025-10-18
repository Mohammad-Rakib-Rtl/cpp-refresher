//
// Created by user on 10/18/2025.
// built-in types, numbers, boolean values, characters and strings, arrays


#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    // short 2 byte( -32768 to 32767) most used
    //int 4byte ( -2B to 2B) most used
    // long 4 bytes (same)
    // long long 8 bytes

    // float 4 bytes (-3.4E38 to 3.4E38)
    // double 8 bytes (-1.7E308 to 1.7E308)
    // long double 8 (3.4E932 to 1.7E4832)

    //  bool 1 bytes (true/false)

    //  char 1 bytes (single characters)

    double price = 99.99;
    float interestRate = 3.67f;
    long fileSize= 90000L;
    char letter = 'A';
    // check by using "auto" keyword before variable to check its type
    bool isValid = false;


    // int number = 0;
    // int number {};
    // cout << number;


    // working with numbers
    //Number systems
    /* system               digits              example
     *decimal(base 10)      0-9                 255
     *Binary (base 2)       0, 1                11111111
     *Hexadecimal(base 16)  0-9, A-F            FF              (used for colors RGB)
     *hexa example RGB = RED(FF) GREEN(00) BLUE(00)
     */

    // int num = 0b11111111; //represent it to bin to dec

    // int num = 0xff;

    unsigned int num = 0; //stay away from this xD
    num--;
    // cout << num;

    // int number = 1'000'000;
    // short another{number};
    // cout << another;


    //generating random numbers

    // time(nullptr); // jan 1 1970
    // long elapsedSeconds = time(0);
    // srand(elapsedSeconds);
    srand(time(0));
    int number = rand() % 20;
    cout << number;




    return 0;

}