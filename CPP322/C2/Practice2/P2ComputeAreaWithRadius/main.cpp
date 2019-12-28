//
//  main.cpp
//  P2ComputeAreaWithRadius
//
//  Created by KYT on 2019/12/28.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // input a radius then compute area
    float input;
    cout << "Please enter radius:" << endl;
    cin >> input;
    
    if (input < 0) {
        cout << "You gave a wrong radius." << endl;
    }
    
    else {
        cout << input * input * M_PI << endl;
    }
    return 0;
}
