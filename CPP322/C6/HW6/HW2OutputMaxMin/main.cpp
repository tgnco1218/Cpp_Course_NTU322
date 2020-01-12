//
//  main.cpp
//  HW2OutputMaxMin
//
//  Created by KYT on 2020/1/12.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

void yourFunction(float *p, int N, float &m, float &n) {
    n = p[0];
    for (int i=0; i<N ; i++){
        if (p[i]>m) {
            m = p[i];
        }
        if (p[i]<n) {
            n = p[i];
        }
    }
}

int main(){
    int N;
    float m,n;
    cout << "Please enter the length of array" << endl;
    cin >> N;
    float *p = (float *)malloc(sizeof(float)*N);
    for(int i=0; i<N; i++) {
        cin >> *(p+i);
    }
    yourFunction(p,N,m,n);
    cout << "The maximum of your array is " << m << endl;
    cout << "The minimum of your array is " << n << endl;
    return 0;
}
