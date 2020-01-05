//
//  main.cpp
//  P3theOrderedArray
//
//  Created by KYT on 2020/1/4.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // Bubble sort the array
    cout << "Please enter 5 numbers:" << endl;
    double arr[5];
    for (int i=0; i<5; i++){
        cin >> arr[i];
    }
    
    float temp;
    // i is the round, j is the order
    for (int i=0; i<4; i++){
        for (int j=0; j<4-i; j++){
            if (arr[j] > arr[j+1]){
                // swap into ascending order
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for (int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
