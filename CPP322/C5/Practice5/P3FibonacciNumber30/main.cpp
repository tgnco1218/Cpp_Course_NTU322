//
//  main.cpp
//  P3FibonacciNumber30
//
//  Created by KYT on 2020/1/5.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // set up an array composed of the first 30 of Fibonacci number by pointer
    int *p;
    int arr[30] = {1, 1};
    
    p = arr;
    for (int i=2; i<30; i++){
        *(p+i) = *(p+i-1) + *(p+i-2);
    }
    
    for (int i=0; i<30; i++){
        cout << *(p+i) << " ";
    }
    cout << endl;
    return 0;
}

