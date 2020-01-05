//
//  main.cpp
//  P5NumberOfStudents
//
//  Created by KYT on 2020/1/5.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    //
    int len;
    cout << "Please enter the number of students:" << endl;
    cin >> len;
    cout << endl;
    
    int *p;
    p = (int *)malloc(sizeof(int) *len);
    
    for (int i=0; i<len; i++){
        cout << "Please enter the " << i+1 << "th student's score:" << endl;
        cin >> *(p+i);
        cout << endl;
    }
    
    for (int i=0; i<len; i++){
        cout << "#" << i+1 << " " << *(p+i) << endl;
    }
    
    return 0;
}
