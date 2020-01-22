//
//  main.cpp
//  HW3Operator3D
//
//  Created by KYT on 2020/1/19.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

typedef struct{
    float x;
    float y;
    float z;
} Point3D;

ostream& operator << (ostream& os, Point3D p){
    os << "(" << p.x << ", " << p.y << ", " << p.z << ")"<< endl;
    return os;
}

double operator | (Point3D p1, Point3D p2){
    double result = sqrt((double)((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y) + (p1.z-p2.z)*(p1.z-p2.z)));
    return result;
}

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
