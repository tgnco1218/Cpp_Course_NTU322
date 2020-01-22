//
//  main.cpp
//  HW4ASCII
//
//  Created by KYT on 2020/1/21.
//  Copyright © 2020 tgnco1218. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // insert code here...
    ifstream ifile;
    int character;
    ifile.open("HW7_4_Encoded.txt");
    
    ofstream ofile;
    ofile.open ("Decoded.txt");
    
    if (ifile){
        
        while (ifile >> character){
            ofile << (char)character;

        }
        cout << "Finish reading data from HW7_4_Encoded.txt" << endl;
    }
    
    else {
        cout << "Error." << endl;
    }
    
    ifile.close();
    ofile.close();
    return 0;
}
