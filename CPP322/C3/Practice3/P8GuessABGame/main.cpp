//
//  main.cpp
//  P8GuessABGame
//
//  Created by KYT on 2019/12/29.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // guess number game 0A0B
    int ans = 1234, input;
    
    do {
        cout << "Please enter an 4-digit interger composed of 4 different numbers:" << endl;
        cin >> input;
        
        bool flag = true;
        // see if every number in the input integer is unique
        int temp1=0, temp2=0;
        for (int i = 0; i <= 3; i++) {
            temp1 = ((int)(input/(pow(10,i))))%10;
            for (int j = i+1; j<=3; j++) {
                temp2 = ((int)(input/(pow(10,j))))%10;
                if (temp1 == temp2) {
                    cout << "Number used more than once!" << endl;
                    flag = false;
                }
            }
        }
        if (flag) {
            if (ans != input) {
                // calculate A and B
                int A = 0, B = 0;
                for (int i = 0; i <= 3; i++) {
                    temp1 = ((int)(ans/(pow(10,i))))%10;
                    for (int j = 0; j<=3; j++) {
                        temp2 = ((int)(input/(pow(10,j))))%10;
                        if (temp1 == temp2) {
                            
                            if (i == j) {
                                A++;
                            }
                            else {
                                B++;
                            }
                        }
                    }
                }
                cout << "The result now is " << A << "A" << B << "B" << endl;
                cout << "Keep trying!" << endl;
            }
            // got the correct answer
            else {
                cout << "Well done! The answer is " << ans << "!" << endl;
                break;
            }
        }
        else {
            cout << "Try again!" << endl;
        }
    }
    while(ans != input);
    return 0;
}
