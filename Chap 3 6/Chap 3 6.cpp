// Chap 3 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
double const ssugar = 1.5;
double const sbutter = 1;
double const sflour = 2.75;
double const product = 48;

int main()
{
    int cookie;
    cout << "How many cookies do you wish to make?" << endl;
    cin >> cookie;
    cout << "This recipe requires " << ssugar / product * cookie << " cups sugar, " << sbutter / product * cookie << " cups butter, and " << sflour / product * cookie << " cups flour, " << endl;
}