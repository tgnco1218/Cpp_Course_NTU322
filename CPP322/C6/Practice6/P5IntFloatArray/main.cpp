//
//  main.cpp
//  P5IntFloatArray
//
//  Created by KYT on 2020/1/12.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

void getType(int a) {
    cout << "This is an interger: " << a << endl;
}

void getType(float a) {
    cout << "This is a float: " << a << endl;
}

void getType(int *ary, int len) {
    cout << "This is an array: " << endl;
    for (int i=0; i<len; i++){
        cout << *(ary+i) << " ";
    }
    cout << endl;
}

int main() {
    // insert code here...
    int a=1;
    float b=0.5;
    int c[5]={1, 2, 3, 4, 5};
    getType(a);
    getType(b);
    getType(c,5);
    return 0;
}
