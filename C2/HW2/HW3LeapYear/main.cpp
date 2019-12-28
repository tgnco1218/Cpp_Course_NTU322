//
//  main.cpp
//  HW3LeapYear
//
//  Created by KYT on 2019/12/28.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // see if the year is a leap year
    int year;
    cout << "Please enter a year:" << endl;
    
    if (cin >> year) {
        if (year % 400 == 0) {
            cout << "This is a leap year." << endl;
        }
        else if (year % 100 == 0) {
            cout << "This is NOT a leap year." << endl;
        }
        else if (year % 4 == 0) {
            cout << "This is a leap year." << endl;
        }
        else {
            cout << "This is NOT a leap year." << endl;
        }
    }
    else {
        cout << "Invalid input." << endl;
    }
    return 0;
}
