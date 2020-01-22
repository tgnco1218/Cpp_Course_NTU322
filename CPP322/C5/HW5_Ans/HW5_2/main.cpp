#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int N;
    cout << "Please enter the length of array" << endl;
    cin >> N;
    int *p = (int *) malloc(sizeof(int)*N);

    cout << "Please enter the elements of array" << endl;
    for(int i=0;i<N;i++)
        cin >> *(p+i);

    double average=0.0;
    for(int i=0;i<N;i++)
        average+=*(p+i);

    cout << "The average of array is " << average/N << endl;

    return 0;
}
