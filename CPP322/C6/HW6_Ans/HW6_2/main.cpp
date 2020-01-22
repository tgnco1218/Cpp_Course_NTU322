#include <iostream>
#include <stdlib.h>
using namespace std;

void yourFunction(float *p,int len, float &maximum, float &minimum){
    maximum = *p;
    minimum = *p;
    for (int i=0;i<len;i++){
        if (*(p+i)>maximum)
            maximum = *(p+i);
        if (*(p+i)<minimum)
            minimum = *(p+i);
    }
}

int main()
{
    int N;
    float m,n;
    cout << "Please enter the length of array" << endl;
    cin >> N;
    float *p = (float *) malloc(sizeof(float)*N);

    for(int i=0;i<N;i++)
        cin >> *(p+i);

    yourFunction(p,N,m,n);

    cout << "The maximum of your array is " << m << endl;
    cout << "The minimum of your array is " << n << endl;

    return 0;
}

