//
//  main.cpp
//  HW1StringBasics
//
//  Created by KYT on 2020/1/4.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    //
    char str[] = ("Hello");
    cout << "The length of sting is " << strlen(str) << endl;
    
    char str2[80] = ("WorldIsGreat");
    strcpy(str2,str);
    cout << "The copied sting is " << str2 << endl;
    
    char str3[80] = ("WorldIsGreat");
    strcat(str3,str);
    cout << "The concatnated sting is " << str3 << endl;
    
    char str4[80] = ("WorldIsGreat");
    cout << "The comparason is " << strcmp(str,str4) << endl;
    
    string str5_1 = ("Hello");
    string str5_2 = ("World Is Great, Why Not Learn C++?");
    cout << str5_2.insert(10,str) << endl;
    
    string str6 = ("World Is Great, Why Not Learn C++?");
    cout << str6.substr(9,5) << endl;
    
    string str7_1 = ("Is");
    string str7_2 = ("World Is Great, Why Not Learn C++?");
    cout << "The target string starts at the " << str7_2.find(str7_1)  << "-th char" << endl;
    
    string str8 = ("World Is Great, Why Not Learn C++?");
    cout << "The 8th char is " << str8.at(7) << endl;
    
    string str9 = ("World Is Great, Why Not Learn C++?");
    cout << "The length of the string is " << str9.length() << endl;
    
    return 0;
}
