//
//  main.cpp
//  P1PointerDefine
//
//  Created by KYT on 2020/1/5.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // see what happend to the value of the pointer if the float changes
    float *p;
    cout << "Initialize float to 2.5" << endl;
    float v = 2.5;
    p = &v;
    cout << "*p = " << *p << endl;
    
    cout << "Change float to 3.5" << endl;
    v = 3.5;
    cout << "*p = " << *p << endl;
    return 0;
}
