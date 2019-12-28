//
//  main.cpp
//  P1EvenOrOdd
//
//  Created by KYT on 2019/12/28.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // input an integer and see if it's even or odd
    int input;
    cout << "Please enter a number" << endl;
    cin >> input;
    
    if((input % 2) == 0) {
        cout << "Even" << endl;
    }
    
    else {
        cout << "Odd" << endl;
    }
    return 0;
}
