//
//  main.cpp
//  P2Array50ByPointer
//
//  Created by KYT on 2020/1/5.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // set up an array composed of 1,2...50 by pointer
    int *p;
    int arr[50];
    
    for (int i=0; i<50; i++){
        arr[i] = i+1;
    }
    
    p = arr;
    for (int i=0; i<50; i++){
        cout << *(p+i) << " ";
    }
    return 0;
}

