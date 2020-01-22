#include <iostream>

using namespace std;

int main()
{
    string input;
    bool flag = true;
    cout << "Please enter a string:" << endl;
    cin >> input;

    for(int i=input.length()-1;i>=0;i--){
        if(input[i]!=input[input.length()-1-i])
            flag = false;
    }
    if(flag)
        cout << "It is Palindrome!" << endl;
    else
        cout << "It is NOT Palindrome!" << endl;


    return 0;
}
