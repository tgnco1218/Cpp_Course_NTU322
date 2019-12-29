//
//  main.cpp
//  P5CalculateCharInString
//
//  Created by KYT on 2019/12/29.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // calculate amount of a specific char in a string
    string str;
    cout << "Please enter a string:" << endl;
    cin >> str;
    int i = 0;
    for (char c: str){
        if (c == 'a') {
            i += 1;
        }
    }
    cout << "The amount of 'a' in your string is " << i << endl;
    return 0;
}
