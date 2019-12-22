//
//  main.cpp
//  HW2ComputeBMI
//
//  Created by KYT on 2019/12/22.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // BMI = weight(kg)/height(m)^2
    float weight, height, bmi;
    cout << "Please enter your height(cm):" << endl;
    cin >> height;
    height = height / 100.0;
    cout << "Please enter your weight(kg):" << endl;
    cin >> weight;
    bmi = weight / (height * height);
    cout << fixed << setprecision(2) << "Your BMI is " << bmi << endl;
    return 0;
}

