//
//  main.cpp
//  HW2DynamicMemory
//
//  Created by KYT on 2020/1/5.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    // let user input an array and calculate the avarage (with pointer)
    int len;
    cout << "Please enter the length of the array:" << endl;
    cin >> len;
    cout << endl;
    
    float *p;
    p = (float *)malloc(sizeof(float) * len);
    
    cout << "Please enter the values of the array:" << endl;
    for (int i=0; i<len; i++){
        cin >> *(p+i);
    }
    
    float avg = 0;
    for (int i=0; i<len; i++){
        avg += *(p+i);
    }
    avg /= len;
    cout << "The average of the input array is: " << avg << endl;
    return 0;
}
