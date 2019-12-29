//
//  main.cpp
//  P4GetTheBiggestFactor
//
//  Created by KYT on 2019/12/29.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // use break to get the largest factor

    int n;
    cout << "Please enter an integer n:" << endl;
    cin >> n;
    for (int i = n-1; i > 0; i--){
        if (n%i == 0) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
