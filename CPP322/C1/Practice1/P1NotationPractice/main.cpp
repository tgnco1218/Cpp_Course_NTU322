//
//  main.cpp
//  C1T3
//
//  Created by KYT on 2019/12/22.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    // compute 1/6(x^2+35+2x^3+xy^2+3z)
    float x, y, z;
    cout << "Please enter x, y and z:" << endl;
    cin >> x >> y >> z;
    cout << "Output is " << 1.0/6.0 * (x*x + 35.0 + 2.0*x*x*x + x*y*y + 3.0*z) << endl;
    return 0;
}	
