#include <iostream>

using namespace std;

int main()
{
    int number[3][3], total=0;
    cout << "Please enter the 3x3:" << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cin >> number[i][j];
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            total += number[i][j];
    }
    cout << "The estimate amount of animal is: ";
    cout << total * 100 / 9 << endl << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << number[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
