//
//  main.cpp
//  P6GetGCD
//
//  Created by KYT on 2020/1/12.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int getGCD(int a, int b) {
    if (a == b) {
        return a;
    }
    else if (a>b){
        return getGCD(a-b,b);
    }
    else {
        return getGCD(b-a, a);
    }
    
    
}


int main() {
    // insert code here...
    int a, b;
    cout << "Please input 2 interger: " << endl;
    cin >> a >> b;
    cout << "GCD: " << getGCD(a,b) << endl;

    return 0;
}
