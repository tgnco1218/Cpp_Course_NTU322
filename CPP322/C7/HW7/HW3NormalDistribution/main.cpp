//
//  main.cpp
//  HW3NormalDistribution
//
//  Created by KYT on 2020/1/21.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>

using namespace std;

int main() {
    
    int M, N;
    float sigma, mean;
    int frontSide, backSide;
    frontSide = backSide = 0;
    
    cout << "Please input the times(M) and numbers of coins(N):" << endl;
    cin >> M >> N;
    sigma = sqrt(0.5*0.5*N);
    
    int *p = (int *) malloc(sizeof(int)*(N+1));
    int c = 0;
    double sum = 0;
    
    srand((unsigned) time(NULL));
    
    for (int i=0; i<=N; i++){
        *(p+i) = 0;
    }
    
    for (int i=0; i<M; i++) {
        
        frontSide = backSide = 0;
        for (int j=0; j<N; j++) {
            
            c = rand();
            if (c%2) {
                frontSide++;
            }
            else {
                backSide++;
            }
            *(p+frontSide) = *(p+frontSide) + 1;
            
        }
        
        // Print out the counts.
        for (int i=0; i<=N; i++) {
            cout << i << "Front Side = " << *(p+i) << " times" << endl;
        }
        
        // Standard Diviation (optional)
        
        mean = 0.5 * N;
        cout << "Mean = " << mean << endl;
        cout << "Sigma = " << sigma << endl;
        
        for (int i=1; i<4; i++) {
            sum = 0;
            for (int j=mean-i*sigma; j<=mean+i*sigma; j++) {
                sum += *(p+j);
            }
        }
        cout << i << "-th sigma is " << (double)sum/M << endl;
    }
    
    return 0;
}

// rand()%2 = 1 front
// rand()%2 = 0 back
