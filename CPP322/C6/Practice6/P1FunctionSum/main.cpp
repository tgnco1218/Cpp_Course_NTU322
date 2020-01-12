//
//  main.cpp
//  P1FunctionSum
//
//  Created by KYT on 2020/1/12.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int sum(int n) {
    int ans = 0;
    for (int i=0; i<n; i++) {
        ans += i+1;
    }
    return ans;
}

int main() {
    // insert code here...
    cout << "Please input n:" << endl;
    int n, ans = 0;
    cin >> n;
    ans = sum(n);
    cout << "Sum up to n is: " << ans << endl;
    
    return 0;
}
