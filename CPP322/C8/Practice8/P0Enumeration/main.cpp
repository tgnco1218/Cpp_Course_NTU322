//
//  main.cpp
//  P0Enumeration
//
//  Created by KYT on 2020/1/19.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>

using namespace std;

// Enumeration and switch (integer statements)

enum class STATUS {
    
    isNegative,
    isZero,
    isPositive
    
};

int main() {
    
    STATUS now;
    cout << "Please input an integer: " << endl;
    
    int N;
    cin >> N;
    
    if (N==0) {
        now = STATUS::isZero;
    }
    
    else if (N<0) {
        now = STATUS::isNegative;
    }
    
    else {
        now = STATUS::isPositive;
    }
    
    switch (now) {
        case STATUS::isNegative:
            cout << "Negative" << endl;
            break;
            
        case STATUS::isZero:
            cout << "Zero" << endl;
            break;
            
        case STATUS::isPositive:
            cout << "Positive" << endl;
            break;
            
        default:
            break;
    }

    return 0;
}
