#include <iostream>

using namespace std;

int main()
{
    int input, seconds, minutes, hours, days;
    cout << "Please enter the seconds to be transformed" << endl;
    cin >> input;
    days = (int) input/86400;
    hours = (int) (input-days*86400)/3600;
    minutes = (int) (input-days*86400-hours*3600)/60;
    seconds = input%60;
    cout << days << " day, " << hours << ":" << minutes << ":" << seconds;
    return 0;
}
