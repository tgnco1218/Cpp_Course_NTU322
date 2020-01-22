//
//  Pointer3D.cpp
//  HW4HeaderHW3
//
//  Created by KYT on 2020/1/19.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <math.h>
#include "Pointer3D.h"
using namespace std;

ostream& operator << (ostream& os, Point3D p){
    os << "(" << p.x << ", " << p.y << ", " << p.z << ")"<< endl;
    return os;
}

double operator | (Point3D p1, Point3D p2){
    double result = sqrt((double)((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y) + (p1.z-p2.z)*(p1.z-p2.z)));
    return result;
}
