//
//  main.cpp
//  P6CheckIfInputsAreTheSame
//
//  Created by KYT on 2019/12/29.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // check if the input is composed of four different numbers
    int input = 0;
    cout << "Please enter an 4-digit interger composed of 4 different numbers:" << endl;
    cin >> input;
    int temp1=0, temp2=0;
    bool flag = true;
    for (int i = 0; i <= 3; i++) {
        temp1 = ((int)(input/(pow(10,i))))%10;
        for (int j = i+1; j<=3; j++) {
            temp2 = ((int)(input/(pow(10,j))))%10;
            if (temp1 == temp2) {
                flag = false;
            }
        }
    }
    if (flag) {
        cout << "Valid input!" << endl;
    }
    else {
        cout << "Invalid input!" << endl;
    }
    
    return 0;
}
