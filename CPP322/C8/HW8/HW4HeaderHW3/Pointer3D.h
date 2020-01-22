//
//  Pointer3D.h
//  HW4HeaderHW3
//
//  Created by KYT on 2020/1/19.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#ifndef Pointer3D_h
#define Pointer3D_h
#include <iostream>
#include <math.h>
using namespace std;

typedef struct{
    float x;
    float y;
    float z;
} Point3D;

ostream& operator << (ostream& os, Point3D p);
double operator | (Point3D p1, Point3D p2);

#endif /* Pointer3D_h */
