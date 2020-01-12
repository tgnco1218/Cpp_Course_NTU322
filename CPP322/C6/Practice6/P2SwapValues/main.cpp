//
//  main.cpp
//  P2SwapValues
//
//  Created by KYT on 2020/1/12.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    // insert code here...
    cout << "Please enter 2 interger:" << endl;
    int a, b;
    cin >> a >> b;
    cout << "Before swap, a = " << a << "; b = " << b << endl;
    swap(a, b);
    cout << "After swap, a = " << a << "; b = " << b << endl;
    return 0;
}
