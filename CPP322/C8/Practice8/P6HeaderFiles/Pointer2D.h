//
//  Pointer2D.h
//  P6HeaderFiles
//
//  Created by KYT on 2020/1/19.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#ifndef Pointer2D_h
#define Pointer2D_h

#include <iostream>
using namespace std;

typedef struct{
    float x;
    float y;
}Point2D;


ostream& operator<< (ostream &os, Point2D p);

Point2D operator+(Point2D p1,Point2D p2);

Point2D operator-(Point2D p1,Point2D p2);

#endif /* Pointer2D_h */
