//
//  Age.cpp
//  P7Extern
//
//  Created by KYT on 2020/1/19.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Age.h"
using namespace std;

int age_1 = 18;
int age_2 = 65;

void distinguishAge(){
    status age;
    int N;
    cout << "Please enter your age:" << endl;
    cin >> N;
    if(N<=age_1)
        age = isYoung;
    else if(N<=age_2)
        age = isMiddle;
    else
        age = isOld;

    switch(age){
        case isYoung:
            cout << "Young" << endl;
            break;
            
        case isMiddle:
            cout << "Middle" << endl;
            break;
            
        case isOld:
            cout << "Old" << endl;
            break;
    }
}
