//
//  main.cpp
//  P4RankingWithSwitch
//
//  Created by KYT on 2019/12/28.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // see which ranking range is the input score in using switch
    double score;
    int grade = 0;
    cout << "Please enter your score:" << endl;
    cin >> score;
    
    if (score > 100 || score < 0) {
        cout << "The input score is unvalid!" << endl;
    }
    
    else {
        grade = (int)(score / 10);
        switch (grade) {
            case 10:
                cout << "You gat a grade A." << endl;
                break;
            case 9:
                cout << "You gat a grade A." << endl;
                break;
            case 8:
                cout << "You gat a grade B." << endl;
                break;
            case 7:
                cout << "You gat a grade C." << endl;
                break;
            case 6:
                cout << "You gat a grade D." << endl;
                break;
            default:
                cout << "You gat a grade F." << endl;
                break;
        }
    }

    return 0;
}

