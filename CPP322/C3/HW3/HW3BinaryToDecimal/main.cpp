//
//  main.cpp
//  HW3BinaryToDecimal
//
//  Created by KYT on 2019/12/29.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // turn a binary input into decimal
    int n, decimal = 0;
    cout << "Please enter a binary number n:" << endl;
    cin >> n;
    
    bool flag = true;
    for (int i = 0; pow(10,i) <= n; i++){
        int n_digit = (int)((int)(n/pow(10,i))%10);
        if ((n_digit == 1)||(n_digit == 0)) {
            decimal += n_digit*pow(2,i);
        }
        else {
            cout << "Invalid input! Please enter a bunary number!" << endl;
            flag = false;
            break;
        }
    }
    if (flag == true) {
        cout << "The output base in 10 of your binary input " << n << " is " << decimal << "!" << endl;
    }
    return 0;
}
