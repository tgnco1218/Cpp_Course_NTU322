//
//  main.cpp
//  P1CalculateFabonacciTime
//
//  Created by KYT on 2020/1/18.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Fibonacci (int n){
    
    if (n <= 2)
        return 1;
    
    else {
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}

int main() {
    
    int N;
    cout << "Please enter an integer N:" << endl;
    cin >> N;
    clock_t start, finish;
    start = clock();
    
    for (int i=1; i<=N; i++)
        cout << Fibonacci(i) << " ";
    
    finish = clock();
    
    cout << endl << "The time cost: " << (finish - start)/(double)(CLOCKS_PER_SEC) << "s" << endl;
    
    return 0;
}
