//
// Created by user on 10/18/2025.
// built-in types, numbers, boolean values, characters and strings, arrays


#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <limits>

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
    //  cout << number;

    // //  formatting output
    // cout << left;
    // cout << setw(10) << "Spring" << setw(10) << "Nice" << endl
    //      << setw(10) <<  "Summer" << setw(10) << "Hot" << endl;
    //
    //
    // cout << "--------------------------" << endl;
    //
    // cout << 12.34567 << endl;
    // cout << fixed << 12.34567 << endl;
    // cout << fixed << setprecision(10) << 12.34567 << endl
    //         << 22.123456 << endl;

    cout << "--------------------------" << endl;

    //data types size and limits


    int mNumber = numeric_limits<int>::max(); // min()0 mNumber-- vice versa for min, it will show largest value;
    mNumber++; // in this case it will overflowing. it will show negative range.
    cout << mNumber << endl;
    cout << sizeof(int) << endl;
    cout << numeric_limits<int>::min() << endl
            << numeric_limits<int>::max() << endl;

    cout << sizeof(bool) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(float) << endl;

    cout << numeric_limits<double>::min() << endl
         << numeric_limits<double>::max() << endl;

    cout << numeric_limits<float>::min() << endl
         << numeric_limits<float>::max() << endl;

    cout << "---------------------------------------" << endl;
    // working with booleans

    bool isNewUser = false;
    cout << boolalpha << isNewUser << endl;
    cout << noboolalpha << isNewUser << endl;


    // cout << "---------------------------------------" << endl;
    //working with characters and strings

    char ch = 'z';
    // cout << +ch;
    // char ch = 99;
    // cout << ch << endl;

    // string name = "Mohammad Rakib";
    // cout << name;

    string name;
    // cout << "Enter your nickname: ";
    // cin >> name;

    // getline(cin, name); // a function from std

    // cout << "Hi " << name << endl;

    cout << "---------------------------------------" << endl;

    //working with arrays

    int numbers[] = {10, 20};
    // numbers[1] = 137;
    cout << numbers[0] << endl;
    cout << numbers[1] << endl;
    cout << numbers[2] << endl;
    cout << numbers[3] << endl;
    cout << numbers[4] << endl; // size - 1
    cout << numbers[6] << endl; // size - 1

    cout << "---------------------------------------" << endl;

    //type conversion
    int xx = 1;
    // double yy = 2.2;
    double yy = 2.0;
    // double zz = xx+ yy;
    //2ways
    // int zz = xx + (int)yy; // c style casting
    int zz = xx + static_cast<int>(yy); // c++ casting also safer than c style casting
    cout << zz << endl;



    return 0;

}