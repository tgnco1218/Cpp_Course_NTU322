//
//  main.cpp
//  HW5PositivePrimeFactors
//
//  Created by KYT on 2019/12/29.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int n = -1;
    
    // keep prompting the user for a new input if not positive integer
    while (n < 0) {
        cout << "Please enter a positive integer n or 0 to quit:" << endl;
        cin >> n;
        if (n < 0) {
            cout << "Invalid input!" << endl;
        }
    }
    
    // quit if the user enter 0
    if (n == 0) {
        cout << "Bye!" << endl;
    }
    
    // get all the prime factors of an positive integer
    else{
        cout << "Prime factor(s) shown as below:" << endl;
        for (int i = 1; i <= n; i++){
            if (n % i == 0) {
                int counter = 1;
                // set a counter contains 1 already(prime factor means only 1 and self)
                for (int j = i; j > 1; j--) {
                    if (i % j == 0) {
                        counter++;
                    }
                }
                if (counter == 2) {
                    cout << i << " is one of the prime factor(s) of " << n << endl;
                }
            }
        }
    }
    return 0;
}
