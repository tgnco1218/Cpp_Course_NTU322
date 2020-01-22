#include <iostream>

using namespace std;

int homework(int N){
    if(N%2){
        cout << "3*" << N << "+1=";
        return 3*N+1;
    }
    else{
        cout << N << "/2=";
        return N/2;
    }
}

int main()
{
    int N,A;
    cout << "Please enter N:" << endl;
    cin >> N;
    while(true){
        N = homework(N);
        cout << N << endl;
        if(N==1)
            break;
    }
    return 0;
}
