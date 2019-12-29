//
//  main.cpp
//  P3NestedForLoopMultiplication
//
//  Created by KYT on 2019/12/29.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // nested for loop
    for (int i = 1; i <= 9; i++){
        for (int j = 1; j <= 9; j++) {
            cout << j << "*" << i << "=" << setw(3) << i*j << " ";
        }
        cout << endl;
    }
    return 0;
}
