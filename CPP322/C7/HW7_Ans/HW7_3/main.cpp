#include <iostream>
#include <math.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    int M,N,sum;
    float sigma,mean;
    int frontside,backside;
    frontside = backside = 0;

    cout << "Please enter the times(M), and the amount of coins(N):" << endl;
    cin >> M >> N;
    sigma = sqrt(0.5*0.5*N);

    int *p = (int *) malloc(sizeof(int)*(N+1));
    int c = 0;

    srand((unsigned) time(NULL));

    for (int i=0;i<=N;i++)
        *(p+i) = 0;

    for(int i=0;i<M;i++)
    {
        frontside = backside = 0;
        for(int j=0;j<N;j++)
        {
            c = rand();
            if (c%2)
                frontside++;
            else
                backside++;
        }
        *(p+frontside) = *(p+frontside) + 1;
    }

    for (int i=0;i<=N;i++)
        cout << i << " front side = " << *(p+i) << " times" << endl;

    mean = 0.5 * N;
    cout << "mean=" << mean << endl;
    cout << "sigma=" << sigma << endl;

    for(int i=1;i<4;i++){
        sum = 0;
        for(int j=mean-i*sigma;j<=mean+i*sigma;j++)
            sum += *(p+j);
        cout << i << "-th sigma is " << (double)sum/M << endl;
    }
    return 0;
}
