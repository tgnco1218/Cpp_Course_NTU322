//
//  main.cpp
//  P5Point2DOperation
//
//  Created by KYT on 2020/1/19.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

typedef struct{
    float x;
    float y;
} Point2D;

ostream& operator << (ostream& os, Point2D p){
    os << "x: " << p.x << endl;
    os << "y: " << p.y << endl;
    return os;
}

Point2D operator + (Point2D p1, Point2D p2){
    Point2D result = {p1.x+p2.x, p1.y+p2.y};
    return result;
}

int main() {
    // insert code here...
    
    Point2D p1 = {5, 6};
    Point2D p2 = {2, 3};
    
    cout << "p1: " << endl;
    cout << p1 << endl;
    
    cout << "p2: " << endl;
    cout << p2 << endl;
    
    cout << "p3 = p1+p2: " << endl;
    Point2D p3 = p1+p2;
    cout << p3 << endl;

    return 0;
}
