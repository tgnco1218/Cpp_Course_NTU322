//
//  main.cpp
//  C1T4
//
//  Created by KYT on 2019/12/22.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // let user input radian and get degree with c++
    double radian;
    cout << "Please enter your radian: " << endl;
    cin >> radian;
    cout << fixed << setprecision(3) << "Your defree is " << radian / 3.1415926 * 180.0 << endl;
    return 0;
}
