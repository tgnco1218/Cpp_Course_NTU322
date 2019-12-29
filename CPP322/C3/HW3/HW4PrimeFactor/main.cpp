//
//  main.cpp
//  HW4PrimeFactor
//
//  Created by KYT on 2019/12/29.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // get all the prime factors of input n
    int n;
    cout << "Please enter an integer n:" << endl;
    cin >> n;
    
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
    return 0;
}
