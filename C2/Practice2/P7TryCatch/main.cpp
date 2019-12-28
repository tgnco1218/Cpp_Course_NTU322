//
//  main.cpp
//  P7TryCatch
//
//  Created by KYT on 2019/12/28.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    float a, b;
    cout << "Please enter two numbers:" << endl;

    try{
        if(!(cin >> a >> b)) {
            throw a;
        }
        else if (b == 0) {
            throw b;
        }
        else {
            cout << a/b << endl;
        }
    }
    catch(float b) {
        cerr << "The second number cannot be zero!" << endl;
    }
    catch(...) {
        cerr << "Error!" << endl;
        
    }
    
    
    return 0;
}
