//
//  main.cpp
//  P5scoreCalculation
//
//  Created by KYT on 2020/1/4.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //
    float avg_1=0.0, avg_2=0.0;
    cout << "Please enter 3 scores for two classes:" << endl;
    int score[2][3];
    for (int i=0; i<2; i++){
        cout << "class" << i+1 << endl;
        for (int j=0; j<3; j++){
            cin >> score[i][j];
        }
    }
    
    for (int i=0; i<3; i++){
        avg_1 += score[0][i];
    }
    avg_1 /= 3.0;
    
    for (int i=0; i<3; i++){
        avg_2 += score[1][i];
    }
    avg_2 /= 3.0;
        
    for (int i=0; i<2; i++){
        cout << "class" << i+1 << endl;
        for (int j=0; j<3; j++){
            cout << "student " << j+1 << setw(3) << score[i][j] << endl;
        }
    }
    
    cout << "The average score of class 1 is " << avg_1 << endl;
    cout << "The average score of class 2 is " << avg_2 << endl;
    
    if (avg_1 > avg_2){
        cout << "The score of class 1 is better." << endl;
    }
    
    else if (avg_2 > avg_1){
        cout << "The score of class 2 is better." << endl;
    }
    
    else{
        cout << "The average of two classes are the same." << endl;
    }
    return 0;
}
