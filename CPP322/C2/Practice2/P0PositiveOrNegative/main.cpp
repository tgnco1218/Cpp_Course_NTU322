//
//  main.cpp
//  P0
//
//  Created by KYT on 2019/12/28.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    float input;
    cout << "Please input an integer:" << endl;
    cin >> input;
    
    if(input > 0) {
        cout << "Positive" << endl;
        
    }
    else if(input < 0) {
        cout << "Negative" << endl;
        
    }
    else {
        cout << "Input is 0" << endl;
        
    }
    return 0;
}

