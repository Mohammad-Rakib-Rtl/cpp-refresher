//
// Created by roman on 10/16/2025.
//
#include <iostream>

using namespace std;

int main() {

    //sales = 95,000$
    //state Tax = 4%
    // country Tax = 2%


    double sales = 95000;
    double stateTax = 4;
    double countyTax = 2;

    cout << "Sales : $" << sales << endl;

    // double tTax = (stateTax + countyTax) * sales / 100;
    // cout << "Total Tax = " << tTax << endl;

    const double pstateTax = (stateTax / 100);
    // cout << pstateTax << endl;
    double pMainStateTax = pstateTax * sales;

    const double pcountyTax = (countyTax / 100);
    double pMaincountyTax = pcountyTax * sales;
    double tTax = pMainStateTax + pMaincountyTax;
    cout << "Total tax : " << tTax  << endl;
    // //
    // //
    double totalSales = sales - tTax;
    cout << "Total Sales = " << totalSales << endl;

    return 0;

}