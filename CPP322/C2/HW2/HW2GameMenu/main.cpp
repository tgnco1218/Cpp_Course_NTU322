//
//  main.cpp
//  HW2GameMenu
//
//  Created by KYT on 2019/12/28.
//  Copyright © 2019 tgnco1218. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // Game menu with switch
    cout << "NTU CSIE C++" << endl;
    cout << "(N) New Game" << endl;
    cout << "(L) Load Game" << endl;
    cout << "(I) Instruction" << endl;
    cout << "(E) Exit" << endl;
    
    char input;
    cin >> input;
    switch (input) {
        case 'N':
            cout << "Opening a new game..." << endl;
            break;
        case 'L':
            cout << "Loading the game..." << endl;
            break;
        case 'I':
            cout << "Instruction" << endl;
            break;
        case 'E':
            cout << "Exiting the game..." << endl;
            break;
        default:
            cout << "Unknown command..." << endl;
            break;
    }
    return 0;
}
