//
//  main.cpp
//  P7tableLoolUp
//
//  Created by KYT on 2020/1/4.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // could save up 30 times of time
    float table[10];
    for (int i=0; i<10; i++){
        table[i] = pow(2, i/10.0);
    }
    
    int temp;
    for (int i=0; i<30000000; i++){
        temp = table[i];
    }
    return 0;
}
