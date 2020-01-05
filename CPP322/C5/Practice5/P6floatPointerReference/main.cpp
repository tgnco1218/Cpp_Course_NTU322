//
//  main.cpp
//  P6floatPointerReference
//
//  Created by KYT on 2020/1/5.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    //
    float v = 0.1;
    float *p = &v;
    float &rv = v;
    float *&rp = p;
    
    cout << "v:" << v << endl;
    cout << "p:" << p << endl;
    cout << "rv:" << rv << endl;
    cout << "rp:" << rp << endl;
    
    cout << "&v:" << &v << endl;
    cout << "&p:" << &p << endl;
    cout << "&rv:" << &rv << endl;
    cout << "&rp:" << &rp << endl;
    return 0;
}
