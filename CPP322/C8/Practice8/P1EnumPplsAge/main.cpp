//
//  main.cpp
//  P1EnumPplsAge
//
//  Created by KYT on 2020/1/19.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>

using namespace std;

enum class AGE {
    isYouth,
    isMiddleAge,
    isOldPeople
};

enum class MINMAX {
    isMax = 65,
    isMin = 18
};

int main() {
    // insert code here...
    AGE now;
    cout << "Please input your age:" << endl;
    int N;
    cin >> N;
    
    if (N > (int)MINMAX::isMax) {
        now = AGE::isOldPeople;
    }
    
    else if ((N <= (int)MINMAX::isMax) && (N > (int)MINMAX::isMin)) {
        now = AGE::isMiddleAge;
    }
    
    else {
        now = AGE::isYouth;
    }
    
    switch (now) {
        case AGE::isOldPeople:
            cout << "You are old." << endl;
            break;
            
        case AGE::isMiddleAge:
            cout << "You are in your middle age." << endl;
            break;
            
        case AGE::isYouth:
            cout << "You are young." << endl;
            break;
            
        default:
            break;
    }
    return 0;
}
