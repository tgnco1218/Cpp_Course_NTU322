#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    srand((unsigned) time(NULL));

    unsigned int M,N;

    cout << "Please enter M and N:" << endl;
    cin >> M >> N;

    for(int i=0;i<M;i++)
        cout << i+1 << "th: " << (rand()%N)/2*2+1 << endl;

    return 0;
}
