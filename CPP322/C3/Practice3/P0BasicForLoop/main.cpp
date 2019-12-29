//
//  main.cpp
//  P0BasicForLoop
//
//  Created by KYT on 2019/12/29.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // compute n!
    long long int n, result = 1;
    cout << "Please enter an integer n:" << endl;
    cin >> n;
    for (int i = 1; i < n; i++){
        result *= i;
    }
    cout << "n! = " << result << endl;
    return 0;
}
