//
//  main.cpp
//  C1T1
//
//  Created by KYT on 2019/12/22.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    // compute area with the user input radius with c++
    float radius, area;
    cout << "Please enter radius:" << endl;
    cin >> radius; //no need to init cuz there will be an input
    area = 3.1415926 * radius * radius;
    cout << "Area of the circle is " << area << endl;
    
    return 0;
}
