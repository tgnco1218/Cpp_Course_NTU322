//
//  main.cpp
//  HW1WhatIsThePointerPointing
//
//  Created by KYT on 2020/1/5.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    //
    int v = 99;
    int *point_1 = &v;
    int **point_2 = &point_1;
    int *&reference_1 = point_1;
    
    cout << "v:" << v << endl;
    cout << "Point_1:" << point_1 << endl;
    cout << "Point_2:" << point_2 << endl;
    
    cout << "5-1-1 Point_1 = 0x7ffeefbff548" << endl;
    cout << "5-1-2 *Point_1 = 99" << endl;
    cout << "5-1-3 &Point_1 = 0x7ffeefbff540" << endl;
    cout << "5-1-4 Point_2 = 0x7ffeefbff540" << endl;
    cout << "5-1-5 *Point_2 = 0x7ffeefbff548" << endl;
    cout << "5-1-6 **Point_2 = 99" << endl;
    cout << "5-1-7 &Point_2 cannot know through the given info" << endl;
    cout << "5-1-8 Reference_1 = 0x7ffeefbff548" << endl;
    cout << "5-1-9 &Reference_1 = 0x7ffeefbff540" << endl;
    
    return 0;
}
