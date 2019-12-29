//
//  main.cpp
//  HW1IterThroughDigits
//
//  Created by KYT on 2019/12/29.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // output every digits
    int n;
    cout << "Please enter an integer n:" << endl;
    cin >> n;
    
    for (int i = 0; pow(10,i) <= n; i++){
        cout << "The " << i+1 << "-th number is " << (int)((int)(n/pow(10,i))%10) << endl;
    }
    return 0;
}
