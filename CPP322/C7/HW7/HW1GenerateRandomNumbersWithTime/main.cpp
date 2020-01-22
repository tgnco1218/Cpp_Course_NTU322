//
//  main.cpp
//  HW1GenerateRandomNumbersWithTime
//
//  Created by KYT on 2020/1/19.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand((unsigned) time(NULL));
    
    int M, N;
    cout << "Please input the numbers of random number and an integer:" << endl;
    cin >> M >> N;
    
    for (int i=0; i<M; i++){
        cout << "Random No." << i+1 << ": " << rand()%100+1 << endl;
    }
    
    return 0;
}
