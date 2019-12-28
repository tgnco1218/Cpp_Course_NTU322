//
//  main.cpp
//  HW1SignOddEvenOrZero
//
//  Created by KYT on 2019/12/28.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // see if the input number is positive/negative, odd/even, or zero
    int input;
    cout << "Please enter an integer:" << endl;
    cin >> input;
    
    if(input > 0) {
        if (input%2 == 0) {
            cout << "Positive, even." << endl;
        }
        else {
            cout << "Positive, odd." << endl;
        }
    }
    else if(input < 0) {
        if (input%2 == 0) {
            cout << "Negative, even." << endl;
        }
        else {
            cout << "Negative, odd." << endl;
        }
    }
    else {
        cout << "Input is 0." << endl;
        
    }
    return 0;
}
