//
//  main.cpp
//  P2NestedForLoop
//
//  Created by KYT on 2019/12/29.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // nested for loop *ex: two dimentional metrix
    // i represents which row
    // j represents which collumn
    int n;
    cout << "Please enter an integer n:" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++) {
            cout << "。";
        }
        cout << endl;
    }
    return 0;
}

