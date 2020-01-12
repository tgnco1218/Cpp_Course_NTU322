//
//  main.cpp
//  P7HanoiTower
//
//  Created by KYT on 2020/1/12.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

void hanoi(int n, char A, char B, char C) {
    if (n == 1) {
        cout << "Move the " << n <<"th plate from pillar " << A << " to pillar " << C << endl;
    }
    else {
        hanoi(n - 1, A, C, B);
        cout << "Move the " << n <<"th plate from pillar " << A << " to pillar " << C << endl;
        hanoi(n - 1, B, A, C);
    }
}

int main(void) {
    int n;
    cout << "Please input the height of Hanoi Tower: " << endl;
    cin >> n;
    hanoi(n, 'A', 'B', 'C');

    return 0;
}


