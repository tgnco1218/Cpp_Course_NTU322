#include <iostream>

using namespace std;

int main()
{
    float arr[5],Max,Min;
    cout << "Please enter 5 height:" << endl;
    for(int i=0;i<5;i++)
        cin >> arr[i];
    Max = Min = arr[0];
    for(int i=0;i<5;i++){
        Max = arr[i]>Max?arr[i]:Max;
        Min = arr[i]<Min?arr[i]:Min;
    }

    cout << "Max:" << Max << endl;
    cout << "Min:" << Min << endl;
    return 0;
}
