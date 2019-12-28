//
//  main.cpp
//  P3RankingWithExceptions
//
//  Created by KYT on 2019/12/28.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // see which ranking range is the input score in
    int score;
    cout << "Please enter your score:" << endl;
    cin >> score;
    
    if (score > 100 || score < 0) {
        cout << "The input score is unvalid!" << endl;
    }
    
    else {
        if (score >= 90) {
            cout << "A" << endl;
        }
        
        else if (score >= 80) {
            cout << "B" << endl;
        }
        
        else if (score >= 70) {
            cout << "C" << endl;
        }
        
        else if (score >= 60) {
            cout << "D" << endl;
        }
        
        else {
            cout << "F" << endl;
        }
    }

    return 0;
}
