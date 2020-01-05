//
//  main.cpp
//  P4array2dMultiplicationTable
//
//  Created by KYT on 2020/1/4.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //
    int arr[9][9];
    for (int i=0; i<9; i++){
        for (int j=0; j<9; j++) {
            arr[i][j] = (i+1)*(j+1);
        }
    }
    
    for (int i=0; i<9; i++){
        for (int j=0; j<9; j++) {
            cout << i+1 << "*" << j+1 << "=" << setw(3) << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
