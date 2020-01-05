//
//  main.cpp
//  P2scoreOf5students
//
//  Created by KYT on 2020/1/4.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // input 5 scores
    
    cout << "Please input 5 scores:" << endl;
    int arr[5];
    for (int i=0; i<5; i++){
        cin >> arr[i];
    }
    
    for (int i=0; i<5; i++){
        cout << arr[i] << endl;
    }
    
    // Get the average of 5 input scores
    float average = 0.0, sd = 0.0;
    for (int i=0; i<5; i++){
        average += arr[i];
    }
    average /= 5;
    cout << "The average score is " << average << endl;
    
    // Calculate the standard deviation
    for (int i=0; i<5; i++){
        sd += pow((arr[i] - average), 2);
    }
    sd = pow((sd/5.0), 0.5);
    cout << "The standard deviation is " << sd << endl;
    
    // Print out the students that scores lower than the average
    for (int i=0; i<5; i++){
        if (arr[i] < average){
            cout << "Number " << i+1 << " is below the average." << endl;
        }
    }
    
    return 0;
}
