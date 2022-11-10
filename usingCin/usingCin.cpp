// usingCin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //variable declaration and initialization
    int num1, num2;
    double sum;

    cout << "Enter any two intergersz\n";
    cin >> num1;
    cin >> num2;

    //logic
    sum = num1 + num2;

    //output
    cout << "The sum is " << sum << "\n";

}


