//
//  main.cpp
//  P0CurrentTime
//
//  Created by KYT on 2020/1/18.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    time_t rawtime;
    time (&rawtime);
    cout << "The current local time is: " << ctime (&rawtime);
    
    return 0;
}

