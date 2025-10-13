//
// Created by roman on 10/11/2025.
//
#include <iostream>

using namespace std;

int main() {

    int a = 1;
    int b = 2;

    int c = a;
    a = b;
    b = c;

    std::cout << b << endl;
    std::cout << a;

    return 0;
}
