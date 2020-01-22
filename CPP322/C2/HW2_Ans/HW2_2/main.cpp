#include <iostream>

using namespace std;

int main()
{
    cout << "שÝ===================שß" << endl;
    cout << "שר   NTU CSIE C++    שר" << endl;
    cout << "שר                   שר" << endl;
    cout << "שר  (N) New Game     שר" << endl;
    cout << "שר  (L) Load Game    שר" << endl;
    cout << "שר  (I) Instruction  שר" << endl;
    cout << "שר  (E) Exit         שר" << endl;
    cout << "שר                   שר" << endl;
    cout << "שד===================שו" << endl;
    char c;
    cin >> c;
    switch(c){
        case 'N':
            cout << "Opening a new game...." << endl;
            break;
        case 'L':
            cout << "Load an old game...." << endl;
            break;
        case 'I':
            cout << "Start instruction...." << endl;
            break;
        case 'E':
            cout << "Exit game...." << endl;
            break;
        default:
            cout << "Unknown command...." << endl;
            break;
    }
    return 0;
}
