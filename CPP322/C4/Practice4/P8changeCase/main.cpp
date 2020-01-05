//
//  main.cpp
//  P8changeCase
//
//  Created by KYT on 2020/1/4.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
    // change the cases
    cout << "Please enter a string:" << endl;
    string str;
    getline(cin, str);
    
    for (char c:str) {
        if (islower(c)){
            cout << (char)toupper(c);
        }
        else{
            cout << (char)tolower(c);
        }
    }
    cout << endl;
    
    return 0;
}
