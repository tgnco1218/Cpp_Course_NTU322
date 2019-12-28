//
//  main.cpp
//  P6RectangleAreException
//
//  Created by KYT on 2019/12/28.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // Break when exceptional cases happen
    float width, height;
    cout << "Please input width and height:" << endl;
    
    if (cin >> width >> height) {
        if (width > 0 && height > 0) {
            cout << "Area: " << width*height << endl;
        }
        else {
            cerr << "Invalid input!" << endl;
        }
    }
    
    else {
        cerr << "Invalid input!" << endl;
    }
    
    return 0;
}

