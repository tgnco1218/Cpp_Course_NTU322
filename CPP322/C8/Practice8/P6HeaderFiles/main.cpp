//
//  main.cpp
//  P6HeaderFiles
//
//  Created by KYT on 2020/1/19.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
#include "Pointer2D.h"

using namespace std;

int main () {
    Point2D p1 = {5,6};
    Point2D p2 = {2,3};
    cout << "p1=" << endl;
    cout << p1 << endl;
    cout << "p2=" << endl;
    cout << p2 << endl;
    cout << "p3=p1+p2=" << endl;
    Point2D p3 = p1+p2;
    cout << p3 << endl;
}
