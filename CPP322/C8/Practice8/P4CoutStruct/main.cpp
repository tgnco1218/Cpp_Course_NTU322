//
//  main.cpp
//  P4CoutStruct
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

ostream& operator<<(ostream& os, Student student) {
    os << "Name: " << student.name << endl;
    os << "ID: " << student.id << endl;
    os << "English Score: " << student.engScore << endl;
    os << "Math Score: " << student.mathScore << endl;
    return os;
}

bool operator > (Student A, Student B){
    if (avg(A)>avg(B)){
        return true;
    }
    else{
        return false;
    }
}

bool operator < (Student A, Student B){
    if (avg(A)<avg(B)){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    
    Student Mick = {"Mick", 268, 80,50};
    Student Rallod = {"Rallod", 269, 60, 90};
    
    if(Rallod>Mick){
        cout << Rallod.name << " is better." << endl;
    }
    else{
        cout << Mick.name << " is better." << endl;
    }
        
    return 0;
}
