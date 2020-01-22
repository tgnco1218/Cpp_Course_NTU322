#include <iostream>

using namespace std;

int main()
{
    unsigned int year;
    cout << "Please enter year:" << endl;
    cin >> year;
    if(year%4)
        cout << "It is NOT leap year";
    else if(year%400==0)
        cout << "It is leap year";
    else if(year%100==0)
        cout << "It is NOT leap year";
    else
        cout << "It is leap year";

    return 0;
}
