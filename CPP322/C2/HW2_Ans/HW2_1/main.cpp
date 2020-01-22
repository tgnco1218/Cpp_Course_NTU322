#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "Please enter an integer:" << endl;
    cin >> N;
    if(!N){
        cout << "Your input value is 0" << endl;
    }
    else{
        if(N>0)
            cout << "Positive, ";
        else
            cout << "Negative, ";
        if(N%2)
            cout << "odd";
        else
            cout << "even";
    }

    return 0;
}
