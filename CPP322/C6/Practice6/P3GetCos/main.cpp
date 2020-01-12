//
//  main.cpp
//  P3GetCos
//
//  Created by KYT on 2020/1/12.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

void getCos(float a, float b, float c, float &cosA, float &cosB, float &cosC) {
    cosA = (b*b + c*c - a*a)/(2*b*c);
    cosB = (a*a + c*c - b*b)/(2*a*c);
    cosC = (b*b + a*a - c*c)/(2*b*a);
}

int main() {
    // insert code here...
    cout << "Please enter 3 length of triangle:" << endl;
    float a, b, c, cosA, cosB, cosC;
    cin >> a >> b >> c;
    getCos(a, b, c, cosA, cosB, cosC);
    cout << "Cos a = " << cosA << endl;
    cout << "Cos b = " << cosB << endl;
    cout << "Cos c = " << cosC << endl;
    return 0;
}
