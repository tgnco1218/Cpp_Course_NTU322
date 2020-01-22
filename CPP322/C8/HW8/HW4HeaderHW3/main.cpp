//
//  main.cpp
//  HW4HeaderHW3
//
//  Created by KYT on 2020/1/19.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
#include <math.h>
#include "Pointer3D.h"
using namespace std;


int main() {
    // insert code here...
    
    Point3D p1 = {3.0, 4.0, 5.0};
    Point3D p2 = {1.0, 2.0, 3.0};
    
    cout << "p1=";
    cout << p1 << endl;
    
    cout << "p2=";
    cout << p2 << endl;
    
    cout << "The distance between p1 and p2 is: ";
    double p3 = p1|p2;
    cout << p3 << endl;

    return 0;
}
