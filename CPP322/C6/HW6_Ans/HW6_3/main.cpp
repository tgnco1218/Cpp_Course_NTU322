#include <iostream>

using namespace std;

bool isPrime(int N);
bool isFactor(int N, int i);

int main()
{
    int N;
    do{
        cout << "Please enter an integer N (or 0 to leave) : " << endl;
        cin >> N;
        if(N>0){
            cout << "The prime factors of N are shown below: " << endl;
            for (int i=1;i<=N;i++){
                if(isPrime(i)&&isFactor(N,i))
                    cout << i << " is the prime factor of " << N <<endl;
            }
        }
        else if(N<0)
            cout << "You enter a wrong N, please enter again !" << endl;
        cout << "------------------------------ " << endl;
    }while(N!=0);
    return 0;
}

bool isPrime(int N){
    int counts = 0;
    for (int j=1;j<=N;j++){
        if (N%j==0){
            counts++;
        }
    }
    if(counts==2)
        return true;
    else
        return false;
}

bool isFactor(int N, int i){
    if(N%i==0)
        return true;
    else
        return false;
}
