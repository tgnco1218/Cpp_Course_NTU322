//
//  main.cpp
//  P6multiplyTwoMetrix
//
//  Created by KYT on 2020/1/4.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //
    cout << "Please input two 3*3 metrix:" << endl;
    int m1[3][3] = {0}, m2[3][3] = {0}, m3[3][3] = {0};
    
    cout << "First metrix: " << endl;
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cin >> m1[j][i];
        }
    }
    
    cout << "Second metrix: " << endl;
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cin >> m2[j][i];
        }
    }
    
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            m3[i][j] = m1[i][0]*m2[0][j] + m1[i][1]*m2[1][j] + m1[i][2]*m2[2][j];
        }
    }
    
    cout << "M1*M2 = " << endl;
    
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << setw(5) << m3[i][j];
        }
        cout << endl;
    }
    return 0;
}
