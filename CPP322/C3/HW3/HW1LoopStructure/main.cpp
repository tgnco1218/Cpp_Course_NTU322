//
//  main.cpp
//  HW0LoopStructure
//
//  Created by KYT on 2019/12/29.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // get all the intergers between the range of two inputs a and b
    int a, b;
    cout << "Please enter 2 integers a and b:" << endl;
    cin >> a >> b;
    
    if (b >= a) {
        for (int i = a; i <= b; i++) {
            cout << i << " ";
        }
    }
    else {
        for (int i = b; i <= a; i++) {
            cout << i << " ";
        }
    }
    return 0;
}
