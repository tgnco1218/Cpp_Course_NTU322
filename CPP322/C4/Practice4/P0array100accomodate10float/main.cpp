//
//  main.cpp
//  P0array100accomodate10float
//
//  Created by KYT on 2020/1/4.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // use array to accomodate 10 float
    int arr[100];
    for (int i=0; i<100; i++){
        arr[i] = i+1;
    }
    for (int i=0; i<100; i++){
        cout << arr[i] << " ";
        
    }
    return 0;
}
