//
//  main.cpp
//  P4arrayN
//
//  Created by KYT on 2020/1/5.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    //
    int len;
    cout << "Please enter the length of array:" << endl;
    cin >> len;
    
    int *p;
    p = (int *)malloc(sizeof(int) *len);
    
    for (int i=0; i<len; i++){
        *(p+i) = i+1;
    }
    
    for (int i=0; i<len; i++){
        cout << "#" << i+1 << " " << *(p+i) << endl;
    }
    
    return 0;
}

