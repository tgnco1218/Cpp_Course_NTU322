//
//  main.cpp
//  P4GetArrayAvarage
//
//  Created by KYT on 2020/1/12.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

double getAvg(int *data, int n) {
    double avg=0.0;
    for (int i=0; i<n; i++){
        avg += *(data+i);
    }
    avg /= n;
    return avg;
}

int main() {
    // insert code here...
    cout << "Please enter the length of array:" << endl;
    int n;
    cin >> n;
    cout << "Please enter the elements of array:" << endl;
    int *data;
    data = (int*)malloc(sizeof(int)*n);
    for (int i=0; i<n; i++){
        cin >> *(data+i);
    }
    double avg;
    avg = getAvg(data, n);
    cout << "The avarage of the input array is: " << avg << endl;

    return 0;
}
