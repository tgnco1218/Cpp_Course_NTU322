//
//  main.cpp
//  P2RandomNumbers
//
//  Created by KYT on 2020/1/18.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // insert code here...
    srand((unsigned) time(NULL));
    
    for (int i=0; i<10; i++) {
        cout << rand()%100+1 << endl;
    }
    
    return 0;
}

