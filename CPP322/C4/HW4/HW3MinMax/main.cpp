//
//  main.cpp
//  HW3MinMax
//
//  Created by KYT on 2020/1/4.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // get the min max value of an array (no need to sort first)
    cout << "Please enter 5 height:" << endl;
    float min=0.0, max=0.0;
    float height[5] = {0};
    for (int i=0; i<5; i++){
        cin >> height[i];
        min = height[i];
        if (height[i]>max){
            max = height[i];
        }
        if (height[i]<min){
            min = height[i];
        }
    }
    
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
    return 0;
}
