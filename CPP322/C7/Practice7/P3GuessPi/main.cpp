//
//  main.cpp
//  P3GuessPi
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
    int n_inside = 0, n_outside = 0;
    
    for (int i=0; i<5000000; i++){
        double x = (double)rand()/RAND_MAX;
        double y = (double)rand()/RAND_MAX;
        
        if ((x*x+y*y)>1) {
            n_outside++;
        }
        
        else if ((x*x+y*y)<1) {
            n_inside++;
        }
        
        if (i==1000||i==10000||i==500000||i==500000-1) {
            cout << "The guess value in " << i+1 << " seeds is " << 4.0*n_inside/(n_outside+n_inside) << endl;
        }
    }
    
    return 0;
}
