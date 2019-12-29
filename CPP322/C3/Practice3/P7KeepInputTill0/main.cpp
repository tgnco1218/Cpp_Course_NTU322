//
//  main.cpp
//  P7KeepInputTill0
//
//  Created by KYT on 2019/12/29.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // keep letting user input until the input value is 0
    int input = 1;
    while (input != 0) {
        cout << "Please enter an interger:" << endl;
        cin >> input;
    }
    return 0;
}
