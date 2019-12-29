//
//  main.cpp
//  P1GetFactors
//
//  Created by KYT on 2019/12/29.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // get the factors of input n
    int n;
    cout << "Please enter an integer n:" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++){
        if (n % i == 0) {
            cout << "Factor: " << i << endl;
        }
    }
    return 0;
}

