//
//  main.cpp
//  P1getDateInAYear
//
//  Created by KYT on 2020/1/4.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // user input month and date, get the date in a year
    int arr[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m,d;
    cout << "Please input the month and the date:" << endl;
    cin >> m >> d;
    
    int day = 0;
    for (int i=0; i<m-1; i++){
        day += arr[i];
    }
    day += d;
    cout << "The order of " << m << "/" << d << " is " << day << endl;
    
    return 0;
}
