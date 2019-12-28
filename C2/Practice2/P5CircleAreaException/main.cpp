//
//  main.cpp
//  P5CircleAreaException
//
//  Created by KYT on 2019/12/28.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // insert code here...
    float radius;
    cout << "Please input a radius:" << endl;
    
    if (cin >> radius) {
        if (radius > 0) {
            cout << "Area: " << radius*radius*M_PI << endl;
        }
        else {
            cerr << "Invalid input!" << endl;
        }
    }
    
    else {
        cerr << "Invalid input!" << endl;
    }
    
    return 0;
}
