//
//  main.cpp
//  HW1Assumption3nPlus1
//
//  Created by KYT on 2020/1/12.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int threeNPlusOne(int n) {
    if (n%2 != 0) {
        cout << n << "*3+1=" << n*3 + 1 << endl;
        n = n*3 + 1;
        return n;
    }
    else {
        cout << n << "/2=" << n/2 << endl;
        n /= 2;
        return n;
    }
}

int main() {
    // insert code here...
    int n;
    cout << "Please input an integer: " << endl;
    cin >> n;
    while (n != 1){
        n = threeNPlusOne(n);
    }
    return 0;
}

