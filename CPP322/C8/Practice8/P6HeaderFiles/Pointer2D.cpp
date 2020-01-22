//
//  Pointer2D.cpp
//  P6HeaderFiles
//
//  Created by KYT on 2020/1/19.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Pointer2D.h"

using namespace std;

ostream& operator<< (ostream &os, Point2D p){
    os << "x: " << p.x << endl;
    os << "y: " << p.y << endl;
    return os;
}

Point2D operator+(Point2D p1,Point2D p2){
    Point2D result = {p1.x+p2.x,p1.y+p2.y};
    return result;
}

Point2D operator-(Point2D p1,Point2D p2){
    Point2D result = {p1.x-p2.x,p1.y-p2.y};
    return result;
}
