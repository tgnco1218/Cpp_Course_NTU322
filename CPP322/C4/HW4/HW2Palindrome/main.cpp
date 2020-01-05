//
//  main.cpp
//  HW2Palindrome
//
//  Created by KYT on 2020/1/4.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // see if the inout string is palindrome
    cout << "Please enter a string:" << endl;
    
    string str;
    cin >> str;
    
    bool flag = false;
    for (int i=0; i<(str.length()/2); i++){
        if (str[0+i] == str[str.length()-i-1]){
            flag = true;
        }
        else{
        }
    }
    
    if (flag == true){
        cout << "The input string is Palindrome" << endl;
    }
    else{
        cout << "The input string is not Palindrome" << endl;
    }
    return 0;
}
