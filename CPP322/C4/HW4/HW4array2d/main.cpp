//
//  main.cpp
//  HW4array2d
//
//  Created by KYT on 2020/1/4.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    //
    cout << "Please input a 3*3 metrix:" << endl;
    int arr[3][3] = {0}, samples = 0;
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[j][i];
            samples += arr[j][i];
        }
    }
    samples = ((samples*100)/9);
    cout << "The eitimated amount of animal is: " << samples << endl;
    return 0;
}
