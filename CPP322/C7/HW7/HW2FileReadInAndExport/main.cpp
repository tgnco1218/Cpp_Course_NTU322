//
//  main.cpp
//  HW2FileReadInAndExport
//
//  Created by KYT on 2020/1/19.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // insert code here...
    ifstream ifile;
    string str, ans;
    ifile.open("HW7_2.txt");
    
    ofstream ofile;
    ofile.open ("Answered.txt");
    
    if (ifile){
        
        while (getline (ifile, str)){
            cout << str << endl;
            cin >> ans;
            ofile << str << endl;
            ofile << ans << endl;
        }
        cout << "Finish reading data from HW7_2.txt" << endl;
    }
    
    else {
        
        cout << "Error." << endl;
    }
    
    ifile.close();
    ofile.close();
    return 0;
}




