//
//  main.cpp
//  P3StudentStruct
//
//  Created by KYT on 2020/1/19.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>

using namespace std;

typedef struct{
    string name;
    int id;
    float engScore;
    float mathScore;
} Student;

double avg(Student student){
    double average = 0.0;
    average = (double)((student.engScore + student.mathScore)/2.0);
    return average;
}

int main() {
    
    Student Mick = {"Mick", 268, 80,50};
    Student Rallod = {"Rallod", 269, 60, 90};
    
    cout << "The average score of Mick is " << avg(Mick) << endl;
    cout << "The average score of Rallod is " << avg(Rallod) << endl;
        
    return 0;
}


    

